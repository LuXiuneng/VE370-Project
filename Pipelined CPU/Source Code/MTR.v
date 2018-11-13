`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:03:04 11/16/2017 
// Design Name: 
// Module Name:    MTR 
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
module MTR(Read_Data, ALU_Result, MemtoReg, Write_Data
    );
input [31:0] Read_Data, ALU_Result;
input MemtoReg;
output [31:0]Write_Data;
reg [31:0] Write_Data;
always@(Read_Data or ALU_Result or MemtoReg)
begin
if(MemtoReg) Write_Data <= Read_Data;
else Write_Data <= ALU_Result;
end
endmodule
