`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:37:20 11/16/2017 
// Design Name: 
// Module Name:    Zero 
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
module Zero( Data1, Data2, ifZero
    );
input [31:0] Data1, Data2;
output ifZero;


assign ifZero = (Data1==Data2)? 1'b1:1'b0;


endmodule
