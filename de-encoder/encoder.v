module encoder (
    input  wire [7:0] x,
    input  wire       en,
    output reg  [2:0] y,
    output reg        tur
);

    integer i;
    always @(x or en) begin
        if(en) begin
            y = 0;
            tur = 0;
            for(i = 0;i<=7;i = i + 1)
                if(x[i] == 1) begin
                    tur = 1;
                    y = i[2:0];
                end
        end
        else begin
            y = 0;
            tur = 0;
        end
    end
endmodule
