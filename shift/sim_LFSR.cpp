#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/VLFSR.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

static VLFSR* top;

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
    top = new VLFSR;
    contextp->traceEverOn(true);
    top->clk = 0;
    top->rst_n = 0;
    top->seed = 0;
    top->start = 0;
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
            top->rst_n = 1;
        if((main_time%10)==5)
            top->clk = 0;
        if((main_time%10)==0)
            top->clk = 1;

        switch (main_time)
        {
        case 10:
            top->rst_n = 0b1;
            top->seed = 0b10011110;
            top->start = 0b1;
            break;
        case 500:
            top->start = 0b0;
        default:
            break;
        }   
        step_and_dump_wave();
        main_time++;     
    }
    

    sim_exit();
    return 0;
}