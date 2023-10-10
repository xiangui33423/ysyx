module rom_ascii(
    input        clk,
    input        rst_n,
    input  [7:0] data,
    output [7:0] seg1,
    output [7:0] seg2
);
    reg [15:0] lut [35:0];
    integer i;
    always @(posedge clk) begin
      if(!rst_n)
        begin
              lut[0] <= {8'h45,8'h30};
              lut[1] <= {8'h16,8'h31};
              lut[2] <= {8'h1E,8'h32};
              lut[3] <= {8'h26,8'h33};
              lut[4] <= {8'h25,8'h34};
              lut[5] <= {8'h2E,8'h35};
              lut[6] <= {8'h36,8'h36};
              lut[7] <= {8'h3D,8'h37};
              lut[8] <= {8'h3E,8'h38};
              lut[9] <= {8'h46,8'h39};

              lut[10]<= {8'h1C,8'h41};
              lut[11]<= {8'h32,8'h42};
              lut[12]<= {8'h21,8'h43};
              lut[13]<= {8'h23,8'h44};
              lut[14]<= {8'h24,8'h45};
              lut[15]<= {8'h2B,8'h46};
              lut[16]<= {8'h34,8'h47};
              lut[17]<= {8'h33,8'h48};
              lut[18]<= {8'h43,8'h49};
              lut[19]<= {8'h3B,8'h4A};
              lut[20]<= {8'h42,8'h4B};
              lut[21]<= {8'h4B,8'h4C};
              lut[22]<= {8'h3A,8'h4D};
              lut[23]<= {8'h31,8'h4E};
              lut[24]<= {8'h44,8'h4f};
              lut[25]<= {8'h4d,8'h50};
              lut[26]<= {8'h15,8'h51};
              lut[27]<= {8'h2d,8'h52};
              lut[28]<= {8'h1b,8'h53};
              lut[29]<= {8'h2c,8'h54};
              lut[30]<= {8'h3c,8'h55};
              lut[31]<= {8'h2a,8'h56};
              lut[32]<= {8'h1d,8'h57};
              lut[33]<= {8'h22,8'h58};
              lut[34]<= {8'h35,8'h59};
              lut[35]<= {8'h1a,8'h5a};
        end
        else begin
          for(i = 0;i<36;i=i+1)begin
            lut[i] <= lut[i];
          end
        end
    end

    wire [7:0] lut_key [35:0];
    wire [7:0] lut_data[35:0];
    reg [7:0] lut_out;
    reg [7:0] addr;
    genvar n;
    generate
        for(n = 0;n<36; n = n + 1)begin
            assign lut_key[n][7:0] = lut[n][15:8];
            assign lut_data[n][7:0] = lut[n][7:0];
        end
    endgenerate


    always @(*) begin
        lut_out = 0;
        for(i = 0;i<36;i=i+1)begin
            lut_out = lut_out | ({8{lut_key[i] == data}} & lut_data[i]);
        end
        // addr1 = {data != 0 && data != 'hF0 && buffer != 'hF0} ?  {1'd0,lut_out[3:0]} : 5'd16;
        // addr2 = {data != 0 && data != 'hF0 && buffer != 'hF0} ?  {1'd0,lut_out[7:4]} : 5'd16;
    end

    reg  [7:0] tmp;
    reg  [7:0] buffer;
    always @(posedge clk or negedge rst_n) begin
      if(!rst_n)
        begin
          buffer <= 0;
          tmp <= 0;
        end
        else begin
          buffer <= tmp;
          tmp <= data;
        end
    end

    wire [4:0] addr1 = {data != 0 && data != 'hF0 && buffer != 'hF0} ?  {1'd0,lut_out[3:0]} : 5'd16;
    wire [4:0] addr2 = {data != 0 && data != 'hF0 && buffer != 'hF0} ?  {1'd0,lut_out[7:4]} : 5'd16;
    rom u_rom1(
        .clk(clk),
        .rst_n(rst_n),
        .addr(addr1),
        .seg(seg1)
    );

    rom u_rom2(
        .clk(clk),
        .rst_n(rst_n),
        .addr(addr2),
        .seg(seg2)
    );
endmodule