#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vproduce.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

static Vproduce* top;

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
    top = new Vproduce;
    contextp->traceEverOn(true);
    top->clk = 0;
    top->rst_n = 0;
    top->en = 0;
    top->data = 0;
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

    while (sc_time_stamp()< 100 && !contextp->gotFinish())
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
            top->data = 0x0;
            top->en = 0b1;
            break;
        case 20:
            top->en = 1;
            top->data = 0x1d;
            break;
        case 30:
            top->data = 0xF0;
            top->en = 0b1;
            break;
        case 40:
            top->data = 0x1d;
            top->en = 0b1;
            break;
        case 50:
            top->en = 1;
            top->data = 0x45;
            break;
        default:
            break;
        }   
        step_and_dump_wave();
        main_time++;     
    }
    

    sim_exit();
    return 0;
}