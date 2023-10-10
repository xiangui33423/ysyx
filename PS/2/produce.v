
module produce (
    input  [7:0] data,
    input  wire  clk,
    input        rst_n,
    input        en,
    output [7:0] counter1,
    output [7:0] counter2,
    output [7:0] ascii1,
    output [7:0] ascii2,
    output  [7:0] key1,
    output  [7:0] key2
);
    wire [2:0] state;
    reg  [7:0] counter;
    reg  [7:0] tmp;
    reg  [7:0] buffer;
    reg  [2:0] last_state;

    always @(posedge clk or negedge rst_n) begin
      if(!rst_n)
        begin
          last_state <= 0;
          counter <= 0;
          buffer <= 0;
          tmp <= 0;
        end
        else begin
          last_state <= state;
          buffer <= tmp;
          tmp <= data;
          if(last_state == 0 && state == 3'd1)
            counter <= counter + 8'd1;

        end
    end
    wire [4:0]addr1 = {data != 0 && data != 'hF0 && buffer != 'hF0} ?  {1'd0,data[3:0]} : 5'd16;
    wire [4:0]addr2 = {data != 0 && data != 'hF0 && buffer != 'hF0} ?  {1'd0,data[7:4]} : 5'd16;

    rom u_rom_counter1(.clk(clk),
              .rst_n(rst_n),
              .addr({1'b0,counter[7:4]}),
              .seg(counter1));
    rom u_rom_counter2(.clk(clk),
              .rst_n(rst_n),
              .addr({1'b0,counter[3:0]}),
              .seg(counter2));
    rom u_rom_ascii1(
      .clk(clk),
      .rst_n(rst_n),
      .addr(addr1),
      .seg(ascii1));
    rom u_rom_ascii2(
      .clk(clk),
      .rst_n(rst_n),
      .addr(addr2),
      .seg(ascii2));


    fsm u_fsm(
      .clk(clk),
      .rst_n(rst_n),
      .data(data),
      .en(en),
      .state(state)
    );
    
    rom_ascii u_ascii(
      .clk(clk),
      .rst_n(rst_n),
      .data(data),
      .seg1(key1),
      .seg2(key2)
    );


endmodule //produce
