module LFSR (
    input        clk,
    input        rst_n,
    input  [7:0] seed,
    input        start, 
    output [7:0] dout,
    output       dout_vld
);

    reg [7:0] cnt;
    reg       start_r;
    wire      start_pedge;
    wire      xor_bit;

    always @(posedge clk or negedge rst_n) begin
      if(!rst_n)
        begin
          start_r <= 0 ;
        end
        else begin
          start_r <= start;
        end
    end

    assign start_pedge = start & ~start_r;

    always @(posedge clk or negedge rst_n) begin
      if(!rst_n)
        begin
          cnt <= 0;
        end
        else if(start_pedge)begin
          cnt <= seed;
        end
        else begin
            cnt <= {xor_bit,cnt[7:1]};
        end
    end

    assign xor_bit = cnt[0]^cnt[2]^cnt[3]^cnt[4];

    assign dout = cnt;
    assign dout_vld = start_r && cnt == seed;

endmodule //LFSR
