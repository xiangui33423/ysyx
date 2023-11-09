module ysyx_23060096_npc (
    input          clk,
    input          rstn,
    input   [31:0] inst,
    output  [31:0] pc
);

//========IF=======
ysyx_23060096_Reg u_pc_reg #(32,0) (clk,rstn,pc+32'd4,pc);


endmodule //ysyx_23060096_NPC