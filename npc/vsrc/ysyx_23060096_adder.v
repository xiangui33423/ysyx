module ysyx_23060096_adder (
    input       [3:0] A,
    input       [3:0] B,
    input             op,
    output reg  [3:0] result,
    output reg        zero,
    output reg        overflow,
    output reg        carry    
);

wire [3:0] t_add_op;

assign t_add_op = ({4{op}}^B) ;
assign {carry, result} = A + t_add_op + {3'b0,op};
assign overflow = (A[3] == t_add_op[3]) && (result[3] != A[3]);
assign zero = ~(|result);

endmodule //adder