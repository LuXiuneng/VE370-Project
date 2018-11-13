`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:51:29 11/17/2017 
// Design Name: 
// Module Name:    ForwardforBranch 
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
module ForwardforBranch(RegRd1, RegRd2, EMALUResult, FwA, FwB, Out1, Out2
    );
input [31:0] RegRd1, RegRd2, EMALUResult;
input FwA, FwB;
output [31:0] Out1, Out2;

assign Out1 = (FwA) ? EMALUResult: RegRd1;
assign Out2 = (FwB) ? EMALUResult: RegRd2;

endmodule
