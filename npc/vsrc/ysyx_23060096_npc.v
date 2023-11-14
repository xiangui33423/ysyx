module ysyx_23060096_npc (
    input         clk,
    input         rstn,
    input  [31:0] inst,
    output reg [31:0] pc
);

//========IF=======
ysyx_23060096_pc u_pc(
    .clk(clk),
    .rstn(rstn),
    .pc(pc)
);

//========ID=======
wire [2:0] ExtOP,
wire       RegWr;
wire       ALUAsrc;
wire [1:0] ALUBsrc;
wire [2:0] Branch,
wire [3:0] ALUctr;
wire       MemtoReg;
wire       MemWr;
wire [2:0] MemOP;

ysyx_23060096_ContrGen u_ContrGen(
    .clk(clk),
    .op(inst[6:0]),
    .func3(inst[14:12]),
    .func7(inst[31:25]),
    .ExtOP(ExtOP),
    .RegWr(RegWr),
    .ALUAsrc(ALUAsrc),
    .ALUBsrc(ALUBsrc),
    .ALUctr(ALUctr),
    .Branch(Branch),
    .MemtoReg(MemtoReg),
    .MemWr(MemWr),
    .MemOP(MemOP)
);




endmodule //ysyx_23060096_NPC