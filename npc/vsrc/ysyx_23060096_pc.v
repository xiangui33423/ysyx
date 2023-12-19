module ysyx_23060096_pc (
    input         clk,
    input         rstn,
    input  [31:0] pc,
    input  [31:0] imm,
    input  [2:0]  Branch,
    input  [31:0] rs1,
    output reg [31:0] next_pc
);
    //reg [31:0] pc_next;
    always @(negedge clk) begin
      if(!rstn)
        begin
          next_pc <= 32'h8000_0000;
        end
      else begin
        next_pc <= next_pc + 32'h4; 
        end
    end

    //assign pc = pc_next;

endmodule //ysyx_23060096_pc