`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:37:11 11/18/2017 
// Design Name: 
// Module Name:    Pipeline_Demo 
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
//module pipeline(clock, reset, register_switch, pc_out, register_out);
//////////////////////////////////////////////////////////////////////////////////
module Pipeline_Demo(clock_pc, reset, switch_pc, switch_register, clock_ssd, an, cathodes);
	input clock_pc, reset, switch_pc, clock_ssd;
	input[4:0] switch_register;
	output [3:0] an;
	output [6:0] cathodes;
	wire clk_500Hz;
	reg [3:0] an;
	reg [6:0] cathodes;
	wire [3:0] w;
	wire [31:0] pc_out, register_out;
	wire [6:0] SSD1;
	wire [6:0] SSD2;
	wire [6:0] SSD3;
	wire [6:0] SSD4;
	reg [31:0] num_out;
			
	Divider500 M1 (clock_ssd, reset, clk_500Hz);
	Ring_counter M3 (reset, clk_500Hz, w);
	
	always@*
	begin
		an <= w;
	end
	
	pipeline M4(clock_pc, reset, switch_register, pc_out, register_out);
	
	always @*
	begin
		if (switch_pc) begin
			num_out <= pc_out;
		end
		else begin
			num_out <= register_out;
		end
	end
	
	wire[3:0] out1, out2, out3, out4;
	assign out1 = num_out[3:0];
	assign out2 = num_out[7:4];
	assign out3 = num_out[11:8];
	assign out4 = num_out[15:12];
	
	SSD M5(out1, SSD1);
	SSD M6(out2, SSD2);
	SSD M7(out3, SSD3);
	SSD M8(out4, SSD4);


	always @(an)
		begin
			case(an)
			4'b0111: cathodes = SSD1;
			4'b1011: cathodes = SSD2;
			4'b1101: cathodes = SSD3;
			4'b1110: cathodes = SSD4;
			endcase
		end

endmodule
