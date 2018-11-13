`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:01:28 11/12/2017 
// Design Name: 
// Module Name:    signextension16_2_32 
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
module signextension16_2_32(numin,numout,opcode
    );
input [15:0] numin;
input [5:0] opcode;
output [31:0] numout;
assign numout=((opcode!=12) && (numin[15]==1))? {16'hFFFF,numin[15:0]}:{16'b0,numin};

endmodule
