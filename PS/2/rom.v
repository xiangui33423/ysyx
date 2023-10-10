module rom (
    input        clk,
    input        rst_n,
    input  [4:0] addr,
    output [7:0] seg   
);

    reg [7:0] rom[16:0];
    integer i;
    always @(posedge clk) begin
      if(!rst_n)
        begin
          rom[0] <= 8'b1111_1100;
          rom[1] <= 8'b0110_0000;
          rom[2] <= 8'b1101_1010;
          rom[3] <= 8'b1111_0010;
          rom[4] <= 8'b0110_0110;
          rom[5] <= 8'b1011_0110;
          rom[6] <= 8'b1011_1110;
          rom[7] <= 8'b1110_0000;
          rom[8] <= 8'b1111_1110;
          rom[9] <= 8'b1111_0110;
          rom[10]<= 8'b1110_1110;
          rom[11]<= 8'b1111_1110;
          rom[12]<= 8'b1001_1100;
          rom[13]<= 8'b1111_1100;
          rom[14]<= 8'b1001_1110;
          rom[15]<= 8'b1000_1110;
          rom[16]<= 8'b0000_0000;
        end
        else begin
          for (i = 0;i < 16 ;i = i + 1) begin
            rom[i] <= rom[i];
          end
        end
    end

    assign seg = rst_n ? rom[addr] : 0;
    
endmodule //rom