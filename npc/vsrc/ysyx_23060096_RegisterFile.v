module ysyx_23060096_RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input w_en
);
  reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (w_en) rf[waddr] <= wdata;
  end
endmodule