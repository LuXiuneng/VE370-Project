`timescale 1ns / 1ps
module Sign_Extension(Opcode, immediate, Out);
	input [5:0]Opcode;

	output[31:0] Out;
	input[15:0] immediate;


	assign Out = (Opcode == 12) ? {16'b0,immediate} : {{16{immediate[15]}},immediate[15:0]};


endmodule

