#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vysyx_23060096_ImmGen.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

static Vysyx_23060096_ImmGen* top;

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
    top = new Vysyx_23060096_ImmGen;
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

        switch (main_time)
        {
        case 10:
            top->ExtOP = 0b000;
            top->inst = 0b0111000011110000111100001;
            break;
        case 20:
            printf("%x",top->imm);
            break;
        // case 50:
        //     top->w_en = 1;
        //     top->waddr = 0b01100;
        //     top->Ra = 0b01000;
        //     top->Rb = 0b01100;
        //     top->wdata = 0x12789545;
        //     break;
        default:
            break;
        }   
        step_and_dump_wave();
        main_time++;     
    }
    

    sim_exit();
    return 0;
}