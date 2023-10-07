
module mux (
    input [1:0] A,
    input [1:0] B,
    input [1:0] C,
    input [1:0] D,
    input [1:0] Y,
    output reg [1:0] out
);
    wire [15:0] lut = { 2'b00, {A},
                        2'b01, {B},
                        2'b10, {C},
                        2'b11, {D}};
    wire [3:0] pair_list [3:0];
    wire [1:0] key_list [3:0];
    wire [1:0] data_list [3:0];
    
    generate
        for(genvar n = 0;n < 4;n = n + 1)begin
            assign pair_list[n] = lut[4*(n+1)-1:4*n];
            assign data_list[n] = pair_list[n][1:0];
            assign key_list[n] = pair_list[n][3:2];
        end
    endgenerate
    
    reg [1:0] lut_out;
    integer i;

    always @(*)begin
        lut_out = 0;
        for (i = 0; i < 4 ;i = i + 1) begin
            lut_out = lut_out | ({2{Y == key_list[i]}} & data_list[i]);
        end
        out[1:0] = lut_out[1:0];
    end

endmodule

