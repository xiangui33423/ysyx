module keyboard (
    input        clk,
    input        rst_n, 
    input        ps2_data,
    input        ps2_clk,
    output [7:0] out,
    output   reg    en
);
    reg ready;
    reg [7:0] data;
    reg [9:0] buffer;
    reg [3:0] count;
    //detect falling/uping edge of ps2_clk
    reg [2:0] ps2_clk_sync;

    always @(negedge clk ) begin
        ps2_clk_sync <= {ps2_clk_sync[1:0],ps2_clk};
    end
    
    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; 

    
    always @(posedge clk ) begin
        if(!rst_n)begin
            buffer <= 0;
            count <= 0;
            en <= 0;
        end
        else begin
            if(sampling)begin
                if(count == 4'd10)begin
                    if((buffer[0] == 0) && ps2_data && ^buffer[9:1]) begin
                        data[7:0] <= buffer[8:1];
                        en <= 1;
                        $display("receive %x", buffer[8:1]);
                    end
                    count <= 0;
                end else begin
                    buffer[count] <= ps2_data;
                    count <= count + 3'b1;
                end
            end
            else if(en == 1)begin
                buffer <= 0;
                en <= 0;
            end
        end
    end

    assign out = data;
endmodule //keyboard