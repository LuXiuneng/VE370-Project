`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:27 11/12/2017 
// Design Name: 
// Module Name:    alu 
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
module alu(ctrl,data1,data2,result,ifzero,ifnotzero
    );
input [3:0]ctrl;
input [31:0] data1,data2;
output [31:0]result;
output ifzero,ifnotzero;
assign ifzero=(result==0)? 1:0;//beq
assign ifnotzero=(result==0)? 0:1;//bne
reg [31:0]resultreg;
assign result=resultreg;
always@(*)
case (ctrl)
4'b0000:resultreg<=data1&data2;
4'b0001:resultreg<=data1|data2;
4'b0010:resultreg<=data1+data2;
4'b0110:resultreg<=data1-data2;
4'b0111:resultreg<=(data1<data2)? 1:0;
default: resultreg<=data1;
endcase
endmodule

	
