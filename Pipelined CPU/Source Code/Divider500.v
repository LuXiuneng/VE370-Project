`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:38 07/24/2017 
// Design Name: 
// Module Name:    Divider500 
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
module Divider500(clk_50MHz, reset, clk_500Hz);
	input clk_50MHz, reset;
	output clk_500Hz;
	wire clock;
	wire [16:0] Q;
	wire load;
	reg clk_500Hz;
	
	and M1(load, Q[16], Q[15], Q[10], Q[9], Q[7], Q[4], Q[3], Q[2], Q[1], Q[0]);
	counter500 M2(clk_50MHz, reset, load, Q);
	DFF M3(load, reset, clk_50MHz, clock);
	always @*
		clk_500Hz <= clock;

endmodule

module counter500(clock_in, reset, load, Q);
	input clock_in, reset, load;
	output [16:0] Q;
	reg [16:0] Q;
	
	always @(posedge reset or posedge clock_in)
		if(reset == 1'b1) Q <= 0;
		else if(load == 1'b1) Q <= 0;
		else Q <= Q + 1;

endmodule

module DFF(load, reset, clock_in, clock_out);
	input load, clock_in, reset;
	output clock_out;
	reg clock_out;
	
	always @(posedge reset or posedge clock_in)
		if (reset == 1'b1) clock_out <= 0;
		else clock_out <= load;
endmodule

