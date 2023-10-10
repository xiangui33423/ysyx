#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vkeyboard.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

static Vkeyboard* top;

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
    top = new Vkeyboard;
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

    while (sc_time_stamp()< 150 && !contextp->gotFinish())
    {

        if((main_time%10)==5)
        {
            top->clk = 0;
            top->ps2_clk = 1;
        }
            
        if((main_time%10)==0)
        {
            top->clk = 1;
            top->ps2_clk = 0;
        }
            

        switch (main_time)
        {
        case 9:top->rst_n = 0b1;
            top->ps2_data = 0;
        break;
        case 15:
            top->ps2_data = 1;
            break;
        case 25:
            top->ps2_data = 0 ;
            break;
        case 35:
            top->ps2_data = 1;
            break;
        case 45:
            top->ps2_data = 0;
            break;
        case 55:
            top->ps2_data = 1;
            break;
        case 65:
            top->ps2_data = 0;
            break;
        
        case 75:
            top->ps2_data = 1;
            break;
        case 85:
            top->ps2_data = 0;
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