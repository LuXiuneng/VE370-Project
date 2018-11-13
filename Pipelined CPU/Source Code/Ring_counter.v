`timescale 1ns / 1ps

module Ring_counter(reset, clk_500Hz, an);
	input reset, clk_500Hz;
	output [3:0] an;
	wire [1:0] Q;
	wire [3:0] w;
	reg [3:0] an;
	counter M9 (reset, clk_500Hz, Q);
	ring M10 (Q, w);
	always @*
		an <= w;
endmodule

module counter(reset, clock, Q);
	input reset, clock;
	output [1:0] Q;
	reg [1:0] Q;
	
	always @(posedge clock or posedge reset)
		if (reset == 1'b1) Q <= 0;
		else Q <= Q + 1;	
endmodule

module ring(Q, an);
	input [1:0] Q;
	output [3:0] an;
	reg [3:0] an;
	always @(Q)  begin
		case(Q)
		2'b00: an = 4'b0111;
		2'b01: an = 4'b1011;
		2'b10: an = 4'b1101;
		2'b11: an = 4'b1110;
		endcase
	end
endmodule
