#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vysyx_23060096_npc.h"
#include "Vysyx_23060096_npc__Dpi.h"
#include "svdpi.h"
#include <assert.h>
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

static Vysyx_23060096_npc* top;

void step_and_dump_wave()
{
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}
void sim_init()
{
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vysyx_23060096_npc;
    contextp->traceEverOn(true);
    top->clk = 0;
    top->rstn = 0;
    top->trace(tfp,0);
    tfp->open("wave.vcd");
}

void sim_exit()
{
    step_and_dump_wave();
    tfp->close();
}

void ebreak(int inst)
{
    if(inst == 0b00000000000100000000000001110011)
        printf("finish\n");
}

int main()
{
    sim_init();

        while (sc_time_stamp()< 1000 && !contextp->gotFinish())
    {
        if(main_time > 10)
            top->rstn = 1;
        if((main_time%10)==5)
            top->clk = 0;
        if((main_time%10)==0)
            top->clk = 1;
        
        if(top->rstn == 1)
        {
            if(top->pc == 0x80000000)
            {
                top->inst = 0b00001111110000000000101010010011;
            }
            else if(top->pc == 0x80000004)
            top->inst = 0b00011111110000000000101010010011;
            else if(top->pc > 0x80000004)
            {
                top->inst = 0b00000000000100000000000001110011;
                ebreak(top->inst);
            }
                
        }
        
        // switch (main_time)
        // {
        // default:
        //     break;
        // }   
        step_and_dump_wave();
        main_time++;     
    }
    

    sim_exit();
    return 0;
}