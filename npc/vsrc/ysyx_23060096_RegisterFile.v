module ysyx_23060096_RegisterFile #(ADDR_WIDTH = 5, DATA_WIDTH = 32) (
  input clk,
  input rstn,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] Ra,
  input [ADDR_WIDTH-1:0] Rb,
  input [ADDR_WIDTH-1:0] waddr, 
  input w_en,

  output [DATA_WIDTH-1:0] busA,
  output [DATA_WIDTH-1:0] busB
);
  reg [DATA_WIDTH-1:0] rf [1<<ADDR_WIDTH-1:0];

  //=====initial======
  integer i;
  always @(posedge clk) begin
    if(!rstn) begin
      for (i = 0;i < 1<<ADDR_WIDTH; i = i + 1) begin
        rf[i] <= 32'h0;
        end
    end
    else
      if (w_en) rf[waddr] <= wdata;
  end
  assign busA = rf[Ra];
  assign busB = rf[Rb];
  
  always @(negedge (!busA) or negedge (!busB)) begin
    $monitor("busA:0x%8x   busB:0x%8x",busA,busB);
  end
endmodule