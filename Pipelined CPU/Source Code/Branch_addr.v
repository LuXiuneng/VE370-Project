`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:20 11/11/2017 
// Design Name: 
// Module Name:    Branch_addr 
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
module Branch_addr(branch_immediate_signext, pcp4, addr
    );
input [31:0] branch_immediate_signext;
input [31:0] pcp4;
output [31:0] addr;

assign addr={branch_immediate_signext[29:0],2'b0}+pcp4;


endmodule
