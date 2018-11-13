`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:43:02 11/16/2017 
// Design Name: 
// Module Name:    PC 
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
module PC(oldpc, pc, PCWrite, clock,reset
    ); //当PCWrite=1的时候，PC可以正常读数
input [31:0]oldpc;
input PCWrite, clock,reset;

output [31:0]pc;
reg [31:0]pc;

initial pc <=0;

always@(posedge clock or posedge reset)
begin
if (reset) pc<=32'b0;
else if(PCWrite) pc<=oldpc;
else pc <=pc;
end
endmodule
