module ysyx_23060096_pc (
    input         clk,
    input         rstn,
    output [31:0] pc
);
    reg [31:0] pc_next;
    always @(negedge clk) begin
      if(!rstn)
        begin
          pc_next = 32'h8000_0000;
        end
        else begin
          pc_next = pc_next + 32'h4; 
        end
    end

    assign pc = pc_next;

endmodule //ysyx_23060096_pc