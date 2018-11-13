`timescale 1ns / 1ps
module ALU_Control(funct, ALUOp, ALUCtl);
	input[5:0] funct;
	input[1:0] ALUOp;
	
	output[3:0] ALUCtl;
	reg[3:0] ALUCtl;
	
	always@(funct or ALUOp)
	begin
		case(ALUOp)
		2'b00: ALUCtl = 4'b0010;
		2'b01: ALUCtl = 4'b0110;
		2'b10: 
		begin
			case(funct)
			32: ALUCtl = 4'b0010;
			34: ALUCtl = 4'b0110;
			36: ALUCtl = 4'b0000;
			37: ALUCtl = 4'b0001;
			42: ALUCtl = 4'b0111;
			default: ALUCtl = 4'b1111;
			endcase
		end
		2'b11: ALUCtl = 4'b0000;
		endcase
	end
endmodule
