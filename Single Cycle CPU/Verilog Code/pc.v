`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:21:53 11/12/2017 
// Design Name: 
// Module Name:    pc 
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
module pc(clk,in,out,rst
    );
input clk,rst;
input [31:0] in;
output [31:0] out;
reg [31:0]out;

always @(posedge clk or posedge rst) begin
if (rst) out<=32'b0; 
else out<=in[31:0];
end
endmodule
