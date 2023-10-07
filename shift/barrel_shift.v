module barrel_shift (
    input  [7:0] din,
    input  [2:0] shamt,
    input        dir,
    input        op,
    output [7:0] dout
);
    reg [7:0] Q;

    assign dout = Q;
    always @(*) begin
        case({op,dir})
            2'b00:begin
                Q = shamt[0] ? {1'b0,din[7:1]} : din;
                Q = shamt[1] ? {2'b0,Q[7:2]} : Q;
                Q = shamt[2] ? {4'b0,Q[7:4]} : Q;
            end
            2'b01:begin
                Q = shamt[0] ? {din[6:0], 1'b0} : din;
                Q = shamt[1] ? {Q[5:0], 2'b0} : Q;
                Q = shamt[2] ? {Q[3:0], 4'b0} : Q;
            end
            2'b10:begin
                Q = shamt[0] ? {din[7],din[7:1]} : din;
                Q = shamt[1] ? {{2{Q[7]}},Q[7:2]} : Q;
                Q = shamt[2] ? {{4{Q[7]}},Q[7:4]} : Q;
            end
            2'b11:begin
                Q = shamt[0] ? {din[6:0], 1'b0} : din;
                Q = shamt[1] ? {Q[5:0], 2'b0} : Q;
                Q = shamt[2] ? {Q[3:0], 4'b0} : Q;
            end 
        endcase
    end
endmodule //barrel_shift

