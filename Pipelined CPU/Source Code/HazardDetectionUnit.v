`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:09:28 11/16/2017 
// Design Name: 
// Module Name:    HazardDetectionUnit 
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
module HazardDetectionUnit(IIRs, IIRt, IERt, IEMemRead, PCWrite, IIWrite, ControlMUX, beq, bne, EMMemRead, EmRt, IERegWrite, IERd, IERegDst,IIRegDst,Jump, IF_flush, Zero);
input [4:0]IIRs, IIRt, IERt, EmRt, IERd;
input IEMemRead, beq, bne, EMMemRead,IERegWrite,IERegDst,IIRegDst, Jump;
input Zero;
output PCWrite, IIWrite, ControlMUX, IF_flush;
assign PCWrite = ( (IEMemRead && ( (IERt==IIRs) |((IIRegDst)&(IERt==IIRt)) ))  || 
	(IEMemRead & (beq|bne) & ((IERt==IIRs)| (IERt==IIRt))) || 
	(EMMemRead & (beq|bne) & ((EmRt==IIRs)| (EmRt==IIRt))) ||
	(IERegWrite &&(beq|bne)&&( (IERegDst & ((IERd==IIRs)|(IERd==IIRt)))|((~IERegDst) &( & ((IERt==IIRs)|(IERt==IIRt))) ) ) ) ) ? 0:1;
assign IIWrite = PCWrite;
assign ControlMUX = PCWrite;
assign  IF_flush = (Jump |(beq & Zero) | (bne & (~Zero)) )& PCWrite;





/*reg PCWrite, IIWrite, ControlMUX;
always@(IIRs, IIRt, IERt, IEMemRead)begin
if( (IEMemRead && ( (IERt==IIRs) |(IERt==IIRt) ))  || (IEMemRead & (beq|bne) & ((IERt==IDRs)| (IERt==IDRt))) || (EMMemRead & (beq|bne) & ((EmRt==IDRs)| (EmRt==IDRt))) ||(IERegWrite && (IERegDst & ((IERd==IDRs)|(IERd==IDRt)))|((~IERegDst) &(IERegDst & ((IERd==IDRs)|(IERd==IDRt))) ) )             ) begin
PCWrite =0;
IIWrite=0;
ControlMUX=1;
end
else begin
PCWrite=1;
IIWrite=1;
ControlMUX=0;
end



end
*/

endmodule
