`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:51:33 11/17/2017 
// Design Name: 
// Module Name:    mux 
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
module mux(in0,in1,out,sel
    );
parameter bitnum=32;
input [bitnum-1:0]in0,in1;
output [bitnum-1:0] out;
input sel;
assign out= (sel) ?in1:in0;

endmodule
