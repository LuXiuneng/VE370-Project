`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:52:36 11/12/2017 
// Design Name: 
// Module Name:    mux_32 
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
module mux_32(data0,data1,ctrl,out
    );
	input [31:0] data0,data1;
	input ctrl;
	output [31:0]out;
	assign out=(ctrl)? data1:data0;

endmodule
