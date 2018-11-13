`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:34:21 11/16/2017 
// Design Name: 
// Module Name:    Bypassign_Unit 
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
module Bypassign_Unit(FA, FB, IERs, IERt, EMRd, EMRegWrite, MWRd, MWRegWrite, FwA, FwB, beq, bne, IIRs, IIRt
    );
input [4:0] IERs, IERt, EMRd, MWRd,IIRs, IIRt;
input EMRegWrite,MWRegWrite, beq, bne;
output [1:0] FA, FB;
output FwA, FwB;


assign FA[1] = (EMRegWrite && (EMRd != 0) &&(EMRd == IERs))? 1:0;
assign FA[0] = (MWRegWrite && (MWRd !=0) &&(MWRd == IERs) && !(EMRegWrite && (EMRd != 0) &&(EMRd == IERs))) ? 1:0;
assign FB[1] = (EMRegWrite && (EMRd != 0) &&(EMRd == IERt))? 1:0;
assign FB[0] = (MWRegWrite && (MWRd !=0) &&(MWRd == IERt) && !(EMRegWrite && (EMRd != 0) &&(EMRd == IERt))) ? 1:0;

assign FwA = (bne | beq) & EMRegWrite & (EMRd == IIRs) & (EMRd!=0)  ? 1:0;
assign FwB = (bne | beq) & EMRegWrite & (EMRd == IIRt) & (EMRd!=0)  ? 1:0;

endmodule
