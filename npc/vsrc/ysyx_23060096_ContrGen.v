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
    casez ({op[6:2],func3[2:0],func7[5]})
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
        9'b00101_000_?:begin//auipc
            ExtOP = 3'b001;
            RegWr = 1'b1;
            Branch = 0;
            MemtoReg = 0;
            MemWr = 0;
            ALUAsrc = 1;
            ALUBsrc = 2'b01;
            ALUctr = 0;
        end
        9'b01101_???_?:begin//lui
            ExtOP = 3'b001;
            RegWr = 1;
            Branch = 0;
            MemtoReg = 0;
            MemWr = 0;
            ALUBsrc = 2'b01;
            ALUctr = 4'b0011;
        end
        9'b11011_???_?:begin//jal
            ExtOP = 3'b100;
            RegWr = 1;
            Branch = 3'b001;
            MemtoReg = 0;
            MemWr = 0;
            ALUAsrc = 1;
            ALUBsrc = 2'b10;
            ALUctr = 0;
        end
        9'b11001_000_?:begin//jalr
           ExtOP = 0;
           RegWr = 1;
           Branch = 3'b010;
           MemWr = 0;
           MemtoReg = 0;
           ALUAsrc = 1;
           ALUBsrc = 2'b10;
           ALUctr = 0; 
        end
        default :begin
            ExtOP = 0;
            RegWr = 0;
            MemWr = 0;
        end
    endcase
end

endmodule //ysyx_23060096_ContrGen