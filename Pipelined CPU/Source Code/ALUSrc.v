`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:18:57 11/16/2017 
// Design Name: 
// Module Name:    ALUSrc 
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
module ALUSrc(Din, sign_ext, Dout, ALUSrc
    );

input [31:0]Din, sign_ext;
input ALUSrc;
output [31:0] Dout;

assign Dout = (ALUrc)? sign_ext:Din;

endmodule
