module ysyx_23060096_adder (
    input       [31:0] A,
    input       [31:0] B,
    input             op,
    output reg  [31:0] result,
    output reg        zero,
    output reg        overflow,
    output reg        carry    
);

wire [31:0] t_add_op;

assign t_add_op = ({32{op}}^B) ;
assign {carry, result} = A + t_add_op + {31'b0,op};
assign overflow = (A[31] == t_add_op[31]) && (result[31] != A[31]);
assign zero = ~(|result);

endmodule //adder