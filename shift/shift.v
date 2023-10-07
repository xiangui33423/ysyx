module shift (
    input [7:0] din,
    input       rst_n,  
    input       clk,
    input [2:0] op,
    output [7:0] dout 
);  
    reg [7:0] Q;
    integer i;
    assign dout = (rst_n || op != 3'b000) ? Q : 0;

    always @(posedge clk or negedge rst_n) begin
        if(op == 3'b001) Q <= din;
        else if(op == 3'b010) Q <= {1'b0,Q[7:1]};
        else if(op == 3'b011) Q <= {Q[6:0],1'b0};
        else if(op == 3'b100) Q <= {Q[7],Q[7:1]};
        else if(op == 3'b110) Q <= {Q[0],Q[7:1]};
        else if(op == 3'b111) Q <= {Q[6:0],Q[7]};
        else if(op == 3'b101) begin
            Q <= {din[0],Q[7:1]};
        end
    end


endmodule //shift
