#include "verilated.h"
#include "verilated_vcd_c.h"
#include "obj_dir/Vbarrel_shift.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vbarrel_shift* top;

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
    top = new Vbarrel_shift;
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
    top->din = 0b01101100; top->op = 0b0; top->shamt = 0b010; top->dir = 0b0; step_and_dump_wave();
                                                              top->dir = 0b1; step_and_dump_wave();
    top->din = 0b01101100; top->op = 0b1; top->shamt = 0b100; top->dir = 0b0; step_and_dump_wave();
                                                              top->dir = 0b1; step_and_dump_wave();

    sim_exit();
    return 0;
}
