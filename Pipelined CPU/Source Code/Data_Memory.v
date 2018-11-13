`timescale 1ns / 1ps
module Data_Memory(MemWrite, MemRead,  DAddress, Data_in, Data_out, clock);
	input MemRead, MemWrite,clock;
	input[31:0] DAddress, Data_in;  //Daddress 是ALU跑出来的， data_in 是readreg2, negedge
	output[31:0] Data_out; 
	
	reg[31:0] D_Memory[0:31];
	reg[29:0] address;

	
	
	
	// Read Data from the memory
	assign Data_out = (MemRead) ? D_Memory[DAddress[31:0]>>2] : 0;
	/*
	always@(MemRead or DAddress) begin
		if(MemRead == 1) begin
		address = DAddress[31:0]>>2;
		end
		Data_out = D_Memory[address];
	end
	*/
	
	// write data
	integer i;
	initial begin
		for(i = 0; i < 32; i = i + 1) D_Memory[i] <= 0;
	end
	
	always@(negedge clock) begin
		if (MemWrite) begin
		address = DAddress[31:0]>>2;
		D_Memory[address] = Data_in;
		end
	end
endmodule
