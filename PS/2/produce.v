module produce (
    input  [7:0] data,
    input  wire  clk,
    input        rst_n,
    output [7:0] counter1,
    output [7:0] counter2,
    output [7:0] ascii1,
    output [7:0] ascii2,
    output [7:0] key1,
    output [7:0] key2
);

    always @(posedge clk or negedge rst_n) begin
      if(!rst_n)
        begin
          rom u_rom(.clk(clk),.rst_n(rst_n));
          counter1 <= 0;
          counter2 <= 0;
          ascii1 <= 0;
          
        end
        else begin
          //...
        end
    end

endmodule //produce
