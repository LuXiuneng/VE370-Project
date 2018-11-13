`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:13:28 11/16/2017 
// Design Name: 
// Module Name:    RegDst 
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
module RegDst(rt, rd, Dout, RegDst
    );
input [31:0]rt, rd;
input RegDst;
output [31:0] Dout;
assign Dout = (RegDst)? rd:rt;

endmodule
