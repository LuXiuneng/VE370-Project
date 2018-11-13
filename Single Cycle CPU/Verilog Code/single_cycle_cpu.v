`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:48:25 11/13/2017 
// Design Name: 
// Module Name:    single_cycle_cpu 
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
module single_cycle_cpu(clk,rst,pcout
    );
input clk,rst;
output [31:0]pcout;
wire [31:0] pcin,pcout,pcadd4;
pc pc_a(clk,pcin,pcout,rst);
assign pcadd4=pcout+4;
wire [31:0]instruction;
instructionreg instructionreg_a(pcout,instruction);
wire [31:0] jumpaddress;
assign jumpaddress={pcadd4[31:28],instruction[25:0],2'b00};
wire regdst,jump,branch_beq,branch_bne,memread,memtoreg,memwrite,alusrc,regwrite;
wire [1:0] aluop;
control control_a(instruction[31:26],regdst,jump,branch_beq,branch_bne,memread,memtoreg,memwrite,alusrc,regwrite,aluop);

wire [31:0]writereg31;
wire [4:0] writereg;
mux_32 mux1({instruction[20:16],27'b0},{instruction[15:11],27'b0},regdst,writereg31);
assign writereg=writereg31[31:27];
wire [31:0] writedata,readdata1,readdata2;
regfile regfile_a(instruction[25:21],instruction[20:16],writereg,writedata,readdata1,readdata2,regwrite,clk);
wire [31:0] extendedinstruction15_0,alumux;
signextension16_2_32 signextension16_2_32_a(instruction[15:0],extendedinstruction15_0,instruction[31:26]);
mux_32 mux_2(readdata2,extendedinstruction15_0,alusrc,alumux);
wire [31:0] addalures,addaluin1;
assign addaluin1= {extendedinstruction15_0[29:0],2'b00};
assign addalures=pcadd4+addaluin1;
wire [3:0]aluctrl;
alucontrol alucontrol_a(instruction[5:0],aluop,aluctrl);
wire [31:0] alures;
wire ifzero,ifnotzero;
alu alu_a(aluctrl,readdata1,alumux,alures,ifzero,ifnotzero);
wire ifbranch;
assign ifbranch=(branch_beq&ifzero)|(branch_bne&ifnotzero);
wire [31:0] mux3res;
mux_32 mux3(pcadd4,addalures,ifbranch,mux3res);
mux_32 mux4(mux3res,jumpaddress,jump,pcin);
wire [31:0] datamemout;
datamem datamem_a(memread,memwrite,clk,readdata2,alures,datamemout);
mux_32 mux5(alures,datamemout,memtoreg,writedata);
endmodule
