`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:02:27 11/11/2017 
// Design Name: 
// Module Name:    Jump_addr 
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
module Jump_addr(jump_immediate, pcp4, addr
    );
input [25:0] jump_immediate;
input [31:0] pcp4;
output [31:0] addr;
assign addr={pcp4[31:28],jump_immediate[25:0],2'b0};

endmodule
