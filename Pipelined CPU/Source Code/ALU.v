`timescale 1ns / 1ps
module ALU(Data1, Data2, ALUCtl, ALU_Result);
	input[31:0] Data1, Data2;
	input[3:0] ALUCtl; //ALU Control
	output[31:0] ALU_Result;
	reg[31:0] ALU_Result;
	
	always@(*)
	begin
		case(ALUCtl)
			4'b0000: begin
				ALU_Result = Data1 & Data2;
			end
			4'b0001: begin
				ALU_Result = Data1 | Data2;
			end
			4'b0010: begin
				ALU_Result = Data1+ Data2;
			end
			4'b0110: begin
				ALU_Result = Data1 - Data2;
			end
			4'b0111: begin
				ALU_Result = (Data1 < Data2) ? 1:0;
			end
			default: begin
				ALU_Result = Data1;
			end
		endcase
	end

endmodule
