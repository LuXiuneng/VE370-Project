`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:46:28 11/14/2017 
// Design Name: 
// Module Name:    testcpu1 
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
module testcpu1;
reg clk, rst;
wire [31:0] pc_out;
single_cycle_cpu UUT(clk,rst,pc_out);
initial begin 
$display("===============================================");

#0 clk=1; rst=1;$display("Time: %d, CLK = %d, PC = %h", $time/50, clk, pc_out);
#10 rst=0;

end
always begin #25 clk=~clk;$display("Time: %d, CLK = %d, PC = %h", $time/50, clk, pc_out);end
initial begin #3000 $display("===============================================");$stop;end
endmodule
