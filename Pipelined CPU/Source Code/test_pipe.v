`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:31:08 11/18/2017 
// Design Name: 
// Module Name:    test_pipe 
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
module test_pipe;
reg clock,reset,register_switch;
wire [31:0]pc_out;
pipeline uut(clock, reset,register_switch,pc_out
    );
	 parameter banclock = 25;
	 initial begin
	 $display("===============================================");

	 #0 clock =1 ; reset =1;	 $display("Time: %d, CLK = %d, PC = %h", $time/50, clock, pc_out);
	 #10 reset =0;

	 end
	 always begin#banclock clock=~clock; $display("Time: %d, CLK = %d, PC = %h", $time/50, clock, pc_out);end
 	 initial begin #(100*banclock) $display("===============================================");$stop;end
endmodule
