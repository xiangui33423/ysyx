#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Valu.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Valu* top;

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
    top = new Valu;
    contextp->traceEverOn(true);
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
    top->op = 0b000; top->A = 0b0111; top->B = 0b1000; step_and_dump_wave();
    top->op = 0b001; top->A = 0b0111; top->B = 0b1000; step_and_dump_wave();
    top->op = 0b010; top->A = 0b0111; top->B = 0b1000; step_and_dump_wave();
    top->op = 0b011; top->A = 0b0111; top->B = 0b1000; step_and_dump_wave();
    top->op = 0b100; top->A = 0b0111; top->B = 0b1000; step_and_dump_wave();
    top->op = 0b101; top->A = 0b0111; top->B = 0b1000; step_and_dump_wave();
    top->op = 0b110; top->A = 0b0111; top->B = 0b1000; step_and_dump_wave();
    top->op = 0b111; top->A = 0b0111; top->B = 0b1000; step_and_dump_wave();                          
    sim_exit();
    return 0;
}