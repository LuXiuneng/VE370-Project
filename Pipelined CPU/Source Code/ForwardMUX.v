`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:54:34 11/16/2017 
// Design Name: 
// Module Name:    ForwardMUX 
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
module ForwardMUX(FA, FB, IERs, IERt, MWRd, EMRd, OutA, OutB 
    );
input [1:0] FA, FB;
input [4:0] IERs, IERt, MWRd, EMRd;
output [4:0] OutA, OutB;

reg [4:0]OutA, OutB;
always@(FA, FB, IERs, IERt, MWRd, EMRd)begin
if(FA==2'b00) OutA = IERs;
else if (FA==2'b01) OutA = MWRd;
else OutA = EMRd; 
end

always@(FA, FB, IERs, IERt, MWRd, EMRd)begin
if(FB==2'b00) OutB = IERt;
else if (FB==2'b01) OutB = MWRd;
else OutB = EMRd; 
end

endmodule
