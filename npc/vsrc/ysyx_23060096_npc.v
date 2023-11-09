module ysyx_23060096_npc (
    input          clk,
    input          rstn,
    input   [31:0] inst,
    output  [31:0] pc
);

//========IF=======
ysyx_23060096_Reg u_pc_reg #(32,32'h8000_0000) (clk,rstn,pc+32'h4;,pc);

//========ID=======



endmodule //ysyx_23060096_NPC