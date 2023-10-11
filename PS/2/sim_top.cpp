#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vtop.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

static Vtop* top;

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
    top = new Vtop;
    contextp->traceEverOn(true);
    top->clk = 0;
    top->rst_n = 0;
    top->ps2_clk = 1;
    top->ps2_data = 1;
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

    while (sc_time_stamp()< 200 && !contextp->gotFinish())
    {

        if((main_time%2)==0)
        {
            top->clk = 0;
            
        }



        if((main_time%2)==1)
        {
            top->clk = 1;
        }
        if((main_time%10)==5 && main_time >=16)
            top->ps2_clk = 1;
        if((main_time%10)==0 && main_time >=16)
            top->ps2_clk = 0;

        switch (main_time)
        {
        case 9:top->rst_n = 0b1;
            break;
        case 10:
            top->ps2_data = 0;
            break;
        case 20:
            top->ps2_data = 0;
        break;
        case 30:
            top->ps2_data = 1;
            break;
        case 40:
            top->ps2_data = 0;
            break;
        case 50:
            top->ps2_data = 1;
            break;
        case 60:
            top->ps2_data = 1;
            break;
        case 70:
            top->ps2_data = 1;
            break;
        case 80:
            top->ps2_data = 0;
            break;
        case 90:
            top->ps2_data = 0;
            break;
        case 100:
            top->ps2_data = 0;
            break;
        case 110:
            top->ps2_data = 1;
            break;
        case 120:
            top->ps2_data = 1;
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