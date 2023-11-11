module ysyx_23060096_RegisterFile #(ADDR_WIDTH = 32, DATA_WIDTH = 5) (
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
  reg [DATA_WIDTH-1:0] rf [ADDR_WIDTH-1:0];

  //=====initial======
  integer i;


  always @(posedge clk) begin
    if(!rstn) begin
      generate
        for (i = 0;i < 32; i = i + 1) begin
          rf[i] <= 32'h0;
        end
      endgenerate
      
    end
      
    if (w_en) rf[waddr] <= wdata;
  end
  assign busA = rf[Ra];
  assign busB = rf[Rb];
  
  //$display("busA:0x%8x   busB:0x%8x",busA,busB);
  
endmodule