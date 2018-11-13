`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:04:57 11/12/2017 
// Design Name: 
// Module Name:    alucontrol 
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
module alucontrol(funct,aluop,aluctrl
    );

input[5:0] funct;
input[1:0] aluop;
output[3:0] aluctrl;	
reg [3:0] aluctrlreg;
assign aluctrl=aluctrlreg;
always@(*)
		case(aluop)
		2'b00:aluctrlreg<=4'b0010;
		2'b01:aluctrlreg<=4'b0110;
		2'b11:aluctrlreg<=4'b0000;
		2'b10:
			case(funct)
			32:aluctrlreg<=4'b0010;
			34:aluctrlreg<=4'b0110;
			36:aluctrlreg<=4'b0000;
			37:aluctrlreg<=4'b0001;
			42:aluctrlreg<=4'b0111;
			default:aluctrlreg<=4'b1111;
			endcase
		default:aluctrlreg<=4'b1111;
		endcase
	
endmodule
