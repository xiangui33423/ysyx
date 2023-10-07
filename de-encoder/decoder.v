module decoder (
    input  wire [2:0] x,
    input  wire       en,
    output reg  [6:0] y
); 
    always @(x or en) begin
        if (en) begin
            case(x)
                3'b001: y = 7'b111_1001;
                3'b010: y = 7'b010_0010;
                3'b011: y = 7'b011_0000;
                3'b100: y = 7'b001_1001;
                3'b101: y = 7'b001_0010;
                3'b110: y = 7'b000_0010;
                3'b111: y = 7'b111_1000;
                3'b000: y = 7'b111_1111;
            endcase
        end
        else y = 7'b000_0000;
    end
endmodule //decoder
