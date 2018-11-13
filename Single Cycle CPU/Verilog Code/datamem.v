`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:59:25 11/12/2017 
// Design Name: 
// Module Name:    datamem 
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
module datamem(memread,memwrite,clk,datain,address,dataout
    );
input memread,memwrite,clk;
input [31:0] datain,address;
output [31:0]dataout;
reg [31:0] memory [0:31];
	initial begin
	memory[0]=32'b0;
	memory[1]=32'b0;
	memory[2]=32'b0;
	memory[3]=32'b0;
	memory[4]=32'b0;
	memory[5]=32'b0;
	memory[6]=32'b0;
	memory[7]=32'b0;
	memory[8]=32'b0;
	memory[9]=32'b0;
	memory[10]=32'b0;
	memory[11]=32'b0;
	memory[12]=32'b0;
	memory[13]=32'b0;
	memory[14]=32'b0;
	memory[15]=32'b0;
	memory[16]=32'b0;
	memory[17]=32'b0;
	memory[18]=32'b0;
	memory[19]=32'b0;
	memory[20]=32'b0;
	memory[21]=32'b0;
	memory[22]=32'b0;
	memory[23]=32'b0;
	memory[24]=32'b0;
	memory[25]=32'b0;
	memory[26]=32'b0;
	memory[27]=32'b0;
	memory[28]=32'b0;
	memory[29]=32'b0;
	memory[30]=32'b0;
	memory[31]=32'b0;
	end	

assign dataout=(memread)? memory[address]:datain;
always @(negedge clk)
if (memwrite)memory[address]=datain;
endmodule