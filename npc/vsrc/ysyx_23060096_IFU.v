module ysyx_23060096_IFU (
    input         clk,
    input         rst_n,
    input  [31:0] pc,
    output [31:0] inst
);

wire [31:0] addr;

assign addr = (pc - 32'h8000_0000) >> 2;
    reg [31:0] inst_reg [1<<32-1:0];

    always @(posedge clk) begin
        if(!rst_n) begin
            inst_reg[0] <= 32'b0000000_01111_00000_000_00001_0010011;
            inst_reg[1] <= 32'b0000000_01111_00000_000_00011_0010011;
        end
    end

    assign inst = inst_reg[addr];

endmodule //ysyx_23060096_PCreg