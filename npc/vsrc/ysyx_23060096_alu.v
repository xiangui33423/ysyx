module ysyx_23060096_alu (
    input   [3:0] A,
    input   [3:0] B,
    input   [2:0] op,
    output  reg [3:0] out
);

    reg zero_add;
    reg zero_sub;
    reg zero_res;
    reg overflow;
    reg carry;
    reg [3:0] res;
    reg [3:0] sub;
    reg [3:0] add;

    adder u_add(.A(A),.B(B),.op(0),.result(add),.zero(zero_add),.carry(carry),.overflow(overflow));
    adder u_sub(.A(A),.B(B),.op(1),.result(sub),.zero(zero_sub),.carry(),.overflow());
    adder u_res(.A(A),.B(B),.op(1),.result(res),.zero(zero_res),.carry(),.overflow());
    always @(*) begin
        case(op)
            3'b000: out = add;
            3'b001: out = sub;
            3'b010: out = ~A;
            3'b011:out = A & B;
            3'b100:out = A | B;
            3'b101:out = A ^ B;
            3'b110:begin
                if(res[3] == 1)
                    out = 1;
                else 
                    out = 0;              
            end
            3'b111:begin
                if(zero_res == 1)
                    out = 1;
                else 
                    out = 0;              
            end
        endcase
    end

endmodule //alu