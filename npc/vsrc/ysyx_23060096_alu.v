module ysyx_23060096_alu (
    input   [31:0] A,
    input   [31:0] B,
    input   [3:0] op,
    output  reg [31:0] out
);

    reg zero_add;
    reg zero_sub;
    reg zero_res;
    reg overflow;
    reg carry;
    reg [31:0] res;
    reg [31:0] sub;
    reg [31:0] add;

    ysyx_23060096_adder u_add(.A(A),.B(B),.op(0),.result(add),.zero(zero_add),.carry(carry),.overflow(overflow));
    ysyx_23060096_adder u_sub(.A(A),.B(B),.op(1),.result(sub),.zero(zero_sub),.carry(),.overflow());
    ysyx_23060096_adder u_res(.A(A),.B(B),.op(1),.result(res),.zero(zero_res),.carry(),.overflow());
    always @(*) begin
        case(op[2:0])
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