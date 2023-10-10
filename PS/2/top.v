module top (
    input clk,
    input rst_n,
    input ps2_clk,
    input ps2_data,
    output [7:0] counter1,
    output [7:0] counter2,
    output [7:0] ascii1,
    output [7:0] ascii2,
    output  [7:0] key1,
    output  [7:0] key2
);
    wire[7:0] data;
    reg       en;

    keyboard u_keyboard(
        .clk(clk),
        .rst_n(rst_n),
        .ps2_data(ps2_data),
        .ps2_clk(ps2_clk),
        .out(data),
        .en(en)
    );

    produce u_produce(
        .clk(clk),
        .rst_n(rst_n),
        .en(en),
        .data(data),
        .counter1(counter1),
        .counter2(counter2),
        .ascii1(ascii1),
        .ascii2(ascii2),
        .key1(key1),
        .key2(key2)
    )
endmodule //main
