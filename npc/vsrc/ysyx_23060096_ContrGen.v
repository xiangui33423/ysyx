module ysyx_23060096_ContrGen (
    input        clk,
    input  [6:0] op,
    input  [2:0] func3,
    input  [6:0] func7,
    output reg [2:0] ExtOP,
    output reg       RegWr,
    output reg       ALUAsrc,
    output reg [1:0] ALUBsrc,
    output reg [3:0] ALUctr,
    output reg [2:0] Branch,
    output reg       MemtoReg,
    output reg       MemWr,
    output reg [2:0] MemOP
);

always @(*) begin
    casex ({op[6:2],func3[2:0],func7[5]})
        9'b00100_000_x:begin//addi
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