module ysyx_23060096_ContrGen (
    input        clk,
    input  [6:0] op,
    input  [2:0] func3,
    input  [6:0] func7,
    output [2:0] ExtOP,
    output reg   RegWr,
    output       ALUAsrc,
    output [1:0] ALUBsrc,
    output [3:0] ALUctr,
    output [2:0] Branch,
    output       MemtoReg,
    output       MemWr,
    output [2:0] MemOP
);

always @(*) begin
    case ({op[6:2],func3[2:0],func7[5]})
        9'b00100_000_?:begin//addi
            ExtOP = 3'b000;
            RegWr = 1'b1;
            Branch = 0;
            MemtoReg = 0;
            MemWr = 0;
            ALUAsrc = 0;
            ALUBsrc = 2'b01;
            ALUctr = 4'b0000;
        end  
    endcase
end

endmodule //ysyx_23060096_ContrGen