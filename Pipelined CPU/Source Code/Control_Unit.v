`timescale 1ns / 1ps
module Control_Unit(OpCode, RegDst, Jump, Branch_beq, Branch_bne, MemRead, MemtoReg, ALUOp, MemWrite, ALUSrc, RegWrite);
	input[5:0] OpCode;
	output RegDst, Jump, Branch_beq, Branch_bne;
	output MemRead, MemtoReg, MemWrite, ALUSrc, RegWrite;
	output[1:0] ALUOp;

	assign RegDst = (OpCode == 6'b000000) ? 1:0;  //R-type
	assign Jump = (OpCode == 6'b000010) ? 1:0;
	assign Branch_beq = (OpCode == 6'b000100) ? 1:0;
	assign Branch_bne = (OpCode == 6'b000101) ? 1:0;
	assign MemRead = (OpCode == 6'b100011) ? 1:0;   //lw
	assign MemtoReg = (OpCode == 6'b100011) ? 1:0;  //lw
	assign MemWrite = (OpCode == 6'b101011) ? 1:0;  //sw
	assign ALUSrc = (OpCode == 6'b100011 || OpCode == 6'b101011 || OpCode == 6'b000010 || OpCode == 6'b001000 || OpCode == 6'b001100) ? 1:0;  //i-type
	assign RegWrite = (OpCode == 6'b000000 || OpCode == 6'b100011 || OpCode == 6'b001000 || OpCode == 6'b001100) ? 1:0;
	assign ALUOp[1] = (OpCode == 6'b000000 || OpCode == 6'b001100) ? 1:0;
	assign ALUOp[0] = (OpCode == 6'b000100 || OpCode == 6'b000101 || OpCode == 6'b000010 || OpCode == 6'b001100) ? 1:0;
	
	
endmodule

//ע�⣺ beq, bne ALUSRC