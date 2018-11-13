`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:11:00 11/11/2017 
// Design Name: 
// Module Name:    PC_Choice 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module PC_Choice(beq, bne, zero, pcp4, branch_addr, jump_addr, jump, oldpc
    );
input beq, bne, zero, jump;
input [31:0] branch_addr;
input [31:0] jump_addr;
input [31:0] pcp4;
output [31:0] oldpc;
wire branch;

assign branch = (beq&zero) | (bne& (~zero));
assign oldpc= (jump) ? jump_addr:((branch) ? branch_addr: pcp4);
endmodule
