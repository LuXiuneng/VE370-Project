`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:04:41 11/12/2017 
// Design Name: 
// Module Name:    control 
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
module control(op,regdst,jump,branch_beq,branch_bne,memread,memtoreg,memwrite,alusrc,regwrite,aluop
    );
input [5:0]op;
output regdst,jump,branch_beq,branch_bne,memread,memtoreg,memwrite,alusrc,regwrite;
output [1:0]aluop;
	assign regdst=(op== 6'b000000) ? 1:0;
	assign jump=(op==6'b000010) ? 1:0;
	assign branch_beq=(op==6'b000100) ? 1:0;
	assign branch_bne=(op==6'b000101) ? 1:0;
	assign memread=(op==6'b100011) ? 1:0;
	assign memtoreg=(op==6'b100011) ? 1:0;
	assign memwrite=(op==6'b101011) ? 1:0;
	assign alusrc=(op==6'b100011||op==6'b101011||op==6'b000010||op==6'b001000||op ==6'b001100) ? 1:0;
	assign regwrite=(op==6'b000000||op==6'b100011||op==6'b001000||op == 6'b001100) ? 1:0;
	assign aluop[1]=(op==6'b000000||op==6'b001100) ? 1:0;
	assign aluop[0]=(op==6'b000100||op==6'b000101||op==6'b000010||op==6'b001100) ? 1:0;
endmodule
