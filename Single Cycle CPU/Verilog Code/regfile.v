`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:07:38 11/12/2017 
// Design Name: 
// Module Name:    regfile 
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
module regfile(readreg1,readreg2,writereg,writedata,readdata1,readdata2,ifregwrite,clk
    );

input clk,ifregwrite;
input [4:0] readreg1,readreg2,writereg;
input [31:0] writedata;
output [31:0] readdata1,readdata2;
reg [31:0] regfile [0:31];
initial begin
regfile[0]=32'b00000000000000000000000000000000;
regfile[1]=32'b00000000000000000000000000000000;
regfile[2]=32'b00000000000000000000000000000000;
regfile[3]=32'b00000000000000000000000000000000;
regfile[4]=32'b00000000000000000000000000000000;
regfile[5]=32'b00000000000000000000000000000000;
regfile[6]=32'b00000000000000000000000000000000;
regfile[7]=32'b00000000000000000000000000000000;
regfile[8]=32'b00000000000000000000000000000000;
regfile[9]=32'b00000000000000000000000000000000;
regfile[10]=32'b00000000000000000000000000000000;
regfile[11]=32'b00000000000000000000000000000000;
regfile[12]=32'b00000000000000000000000000000000;
regfile[13]=32'b00000000000000000000000000000000;
regfile[14]=32'b00000000000000000000000000000000;
regfile[15]=32'b00000000000000000000000000000000;
regfile[16]=32'b00000000000000000000000000000000;
regfile[17]=32'b00000000000000000000000000000000;
regfile[18]=32'b00000000000000000000000000000000;
regfile[19]=32'b00000000000000000000000000000000;
regfile[20]=32'b00000000000000000000000000000000;
regfile[21]=32'b00000000000000000000000000000000;
regfile[22]=32'b00000000000000000000000000000000;
regfile[23]=32'b00000000000000000000000000000000;
regfile[24]=32'b00000000000000000000000000000000;
regfile[25]=32'b00000000000000000000000000000000;
regfile[26]=32'b00000000000000000000000000000000;
regfile[27]=32'b00000000000000000000000000000000;
regfile[28]=32'b00000000000000000000000000000000;
regfile[29]=32'b00000000000000000000000000000000;
regfile[30]=32'b00000000000000000000000000000000;
regfile[31]=32'b00000000000000000000000000000000;
end	 
assign readdata1=regfile [readreg1];
assign readdata2=regfile [readreg2];
always @(negedge clk)
	if (ifregwrite) regfile [writereg]<=writedata;
	always @(clk) begin
				$monitor("[$s0] = %h, [$s1] = %h, [$s2] = %h\n[$s3] = %h, [$s4] = %h, [$s5] = %h\n[$s6] = %h, [$s7] = %h, [$t0] = %h\n[$t1] = %h, [$t2] = %h, [$t3] = %h\n[$t4] = %h, [$t5] = %h, [$t6] = %h\n[$t7] = %h, [$t8] = %h, [$t9] = %h", regfile[16], regfile[17], regfile[18], regfile[19], regfile[20], regfile[21], regfile[22], regfile[23], regfile[8], regfile[9], regfile[10], regfile[11], regfile[12], regfile[13], regfile[14], regfile[15], regfile[24], regfile[25]);
	end
endmodule
