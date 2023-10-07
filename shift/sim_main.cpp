#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vshift.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
vluint64_t main_time = 0;

double sc_time_stamp()
{
    return main_time;
}

static Vshift* top;

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
    top = new Vshift;
    contextp->traceEverOn(true);
    top->clk = 0;
    top->rst_n = 0;
    top->din = 0;
    top->op = 0;
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
    while (sc_time_stamp()<1000 &&!contextp->gotFinish())
    {
        if(main_time > 5)
            top->rst_n = 1;
        if((main_time%10)==5)
            top->clk = 0;
        if((main_time%10)==0)
            top->clk = 1;
        
        switch (main_time)
        {
        case 5:  top->din = 0b00101100;
                 top->op = 0b001;
                 
                 break;
        case 50: top->op = 0b010;
                 
                 break;
        case 90:top->op = 0b001;
                top->din = 0b11010011;
                
                break;
        case 100:top->op = 0b011;
                 
                 break;
        case 140:top->op = 0b001;
                top->din = 0b01010011;
                
                break;
        case 150:top->op = 0b100;
                 
                 break;
        case 250:top->din = 0b01001011;
                 top->op = 0b101;
                 
                 
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