module fsm (
    input        clk,
    input        rst_n,
    input  [7:0] data,
    input        en,
    output [2:0] state
);
    parameter IDLE = 3'b000;
    parameter ON   = 3'b001;
    parameter OFF  = 3'b010;
    parameter WAIT = 3'b100;

    reg [2:0] next_state;
    reg [2:0] current_state;

    always @(posedge clk or negedge rst_n) begin
      if(!rst_n)
        begin
          current_state <= IDLE;
        end
      else begin
          current_state <= next_state;
        end
    end

    always @(next_state) begin
        case(current_state)
            IDLE: if(data != 'h0F && en) next_state = ON;
                  else next_state = IDLE;

            ON: if(data == 'hF0) next_state = OFF;
                else next_state = ON;
                
            OFF: if(en)next_state = WAIT;
                 else next_state = OFF;

            WAIT:  next_state = IDLE;
            default : next_state = IDLE;
        endcase
    end
    assign state = current_state;
endmodule