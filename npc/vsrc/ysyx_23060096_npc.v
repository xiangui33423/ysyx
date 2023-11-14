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
wire [2:0] ExtOP;
wire       RegWr;
wire       ALUAsrc;
wire [1:0] ALUBsrc;
wire [2:0] Branch;
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

wire [31:0] imm;

ysyx_23060096_ImmGen u_ImmGen(
    .clk(clk),
    .inst(inst[31:7]),
    .ExtOP(ExtOP),
    .imm(imm)
);


//=======EX=======
wire [31:0] rc1;
wire [31:0] rc2;

ysyx_23060096_RegisterFile u_RegisterFile(
    .clk(clk),
    .rstn(rstn),
    .Ra(inst[19:15]),
    .Rb(inst[24:20]),
    .wdata(out_data),
    .waddr(inst[11:7]),
    .w_en(RegWr),
    .busA(rc1),
    .busB(rc2)
);

wire [31:0] src1;
wire [31:0] src2;

assign src1 = ALUAsrc ? pc : rc1;

always @(*) begin
    case (ALUBsrc)
        2'b00: src2 = rc2;
        2'b01: src2 = imm;
        2'b10: src2 = 32'd4;
        default : src2 = src2;
    endcase
end

wire [31:0] out_data;

ysyx_23060096_alu u_alu(
    .A(src1),
    .B(src2),
    .op(ALUctr),
    .out(out_data)
);

endmodule //ysyx_23060096_NPC