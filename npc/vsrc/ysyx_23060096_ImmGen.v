module ysyx_23060096_ImmGen (
    input  clk,
    input  rstn,
    input  [24:0] inst,
    input  [2:0]  ExtOP,
    output [31:0] imm
);

    wire [31:0] immI;
    wire [31:0] immU;
    wire [31:0] immS;
    wire [31:0] immB;
    wire [31:0] immJ;

assign immI = {{20{inst[24]}},inst[23:12]};
assign immU = {inst[24:5], 12'b0};
assign immS = {{20{inst[24]}}, inst[24:15], inst[4:0]};
assign immB = {{20{inst[24]}}, inst[0], inst[23:18], inst[4:1], 1'b0};
assign immJ = {{12{inst[24]}}, inst[12:5], inst[13], inst[23:14], 1'b0};

always @(*) begin
    case(ExtOP)
        3'b000: imm = immI;
        3'b001: imm = immU;
        3'b010: imm = immS;
        3'b011: imm = immB;
        3'b100: imm = immJ;
    endcase
end

endmodule //ysyx_23060096_ImmGen