`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:02:40 11/12/2017 
// Design Name: 
// Module Name:    instructionreg 
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
module instructionreg(pc,instruction);
input  [31:0] pc;
output [31:0] instruction;
reg [31:0] instructionmem [0:255];
integer i;
initial begin/*
instructionmem[0] = 32'b00100000000010000000000000100000; //addi $t0, $zero, 0x20
instructionmem[1] = 32'b00100000000010010000000000100111; //addi $t1, $zero, 0x27
instructionmem[2] = 32'b00000001000010011000000000100100; //and $s0, $t0, $t1
instructionmem[3] = 32'b00000001000010011000000000100101; //or $s0, $t0, $t1
instructionmem[4] = 32'b10101100000100000000000000000100; //sw $s0, 4($zero)
instructionmem[5] = 32'b10101100000010000000000000001000; //sw $t0, 8($zero)
instructionmem[6] = 32'b00000001000010011000100000100000; //add $s1, $t0, $t1
instructionmem[7] = 32'b00000001000010011001000000100010; //sub $s2, $t0, $t1
instructionmem[8] = 32'b00010010001100100000000000001001; //beq $s1, $s2, error0
instructionmem[9] = 32'b10001100000100010000000000000100; //lw $s1, 4($zero)
instructionmem[10]= 32'b00110010001100100000000000011000; //andi $s2, $s1, 0x18
instructionmem[11] =32'b00010010001100100000000000001001; //beq $s1, $s2, error1
instructionmem[12] =32'b10001100000100110000000000001000; //lw $s3, 8($zero)
instructionmem[13] =32'b00010010000100110000000000001010; //beq $s0, $s3, error2
instructionmem[14] =32'b00000010010100011010000000101010; //slt $s4, $s2, $s1 (Last)
instructionmem[15] =32'b00010010100000000000000000001111; //beq $s4, $0, EXIT
instructionmem[16] =32'b00000010001000001001000000100000; //add $s2, $s1, $0
instructionmem[17] =32'b00001000000000000000000000001110; //j Last
instructionmem[18] =32'b00100000000010000000000000000000; //addi $t0, $0, 0(error0)
instructionmem[19] =32'b00100000000010010000000000000000; //addi $t1, $0, 0
instructionmem[20] =32'b00001000000000000000000000011111; //j EXIT
instructionmem[21] =32'b00100000000010000000000000000001; //addi $t0, $0, 1(error1)
instructionmem[22] =32'b00100000000010010000000000000001; //addi $t1, $0, 1
instructionmem[23] =32'b00001000000000000000000000011111; //j EXIT
instructionmem[24] =32'b00100000000010000000000000000010; //addi $t0, $0, 2(error2)
instructionmem[25] =32'b00100000000010010000000000000010; //addi $t1, $0, 2
instructionmem[26] =32'b00001000000000000000000000011111; //j EXIT
instructionmem[27] =32'b00100000000010000000000000000011; //addi $t0, $0, 3(error3)
instructionmem[28] =32'b00100000000010010000000000000011; //addi $t1, $0, 3
instructionmem[29] =32'b00001000000000000000000000011111; //j EXIT*/

instructionmem[0] = 32'b00100000000010000000000000100000; //addi $t0, $zero, 0x20
instructionmem[1] = 32'b00100000000010010000000000110111; //addi $t1, $zero, 0x37
instructionmem[2] = 32'b00000001000010011000000000100100; //and $s0, $t0, $t1
instructionmem[3] = 32'b00000001000010011000000000100101; //or $s0, $t0, $t1
instructionmem[4] = 32'b10101100000100000000000000000100; //sw $s0, 4($zero)
instructionmem[5] = 32'b10101100000010000000000000001000; //sw $t0, 8($zero)
instructionmem[6] = 32'b00000001000010011000100000100000; //add $s1, $t0, $t1
instructionmem[7] = 32'b00000001000010011001000000100010; //sub $s2, $t0, $t1
instructionmem[8] = 32'b00010010001100100000000000001001; //beq $s1, $s2, error0
instructionmem[9] = 32'b10001100000100010000000000000100; //lw $s1, 4($zero)
instructionmem[10]= 32'b00110010001100100000000001001000; //andi $s2, $s1, 0x48
instructionmem[11] =32'b00010010001100100000000000001001; //beq $s1, $s2, error1
instructionmem[12] =32'b10001100000100110000000000001000; //lw $s3, 8($zero)
instructionmem[13] =32'b00010010000100110000000000001010; //beq $s0, $s3, error2
instructionmem[14] =32'b00000010010100011010000000101010; //slt $s4, $s2, $s1 (Last)
instructionmem[15] =32'b00010010100000000000000000001111; //beq $s4, $0, EXIT
instructionmem[16] =32'b00000010001000001001000000100000; //add $s2, $s1, $0
instructionmem[17] =32'b00001000000000000000000000001110; //j Last
instructionmem[18] =32'b00100000000010000000000000000000; //addi $t0, $0, 0(error0)
instructionmem[19] =32'b00100000000010010000000000000000; //addi $t1, $0, 0
instructionmem[20] =32'b00001000000000000000000000011111; //j EXIT
instructionmem[21] =32'b00100000000010000000000000000001; //addi $t0, $0, 1(error1)
instructionmem[22] =32'b00100000000010010000000000000001; //addi $t1, $0, 1
instructionmem[23] =32'b00001000000000000000000000011111; //j EXIT
instructionmem[24] =32'b00100000000010000000000000000010; //addi $t0, $0, 2(error2)
instructionmem[25] =32'b00100000000010010000000000000010; //addi $t1, $0, 2
instructionmem[26] =32'b00001000000000000000000000011111; //j EXIT
instructionmem[27] =32'b00100000000010000000000000000011; //addi $t0, $0, 3(error3)
instructionmem[28] =32'b00100000000010010000000000000011; //addi $t1, $0, 3
instructionmem[29] =32'b00001000000000000000000000011111; //j EXIT
	
for (i=30;i<256;i=i+1)
instructionmem[i]=32'b0;
end	


assign instruction=instructionmem[pc[10:2]];

endmodule
