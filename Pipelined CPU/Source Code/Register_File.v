`timescale 1ns / 1ps
module Register_File(registerswitch, registerout,RdReg1, RdReg2, WriteReg, WriteData, RegWrite, RdData1, RdData2, clock); //Combine Register with a MUX
	input[4:0] RdReg1, RdReg2, WriteReg; //rs: [25:21]; rt:[20:16]; rd: [15:11]
	input[31:0] WriteData;
	input RegWrite,clock;
	input [4:0] registerswitch;
	output[31:0] RdData1, RdData2;
	output[31:0] registerout;



	//wire[4:0] writeReg; // input register number
	//assign writeReg = RegDst ? rd:rt;
	
	// initialize the register file
	reg[31:0] register[0:31];
	integer i;
	initial begin
		for(i = 0; i < 32; i = i + 1) register[i] <= 0;
	end
	
	assign RdData1 = register[RdReg1];
	assign RdData2 = register[RdReg2];
	assign registerout = register[registerswitch];

	always@(negedge clock) begin
	if(RegWrite && (WriteReg!=0)) register[WriteReg] <= WriteData;
	end
	
	always @(clock) begin
				$monitor("[$s0] = %h, [$s1] = %h, [$s2] = %h\n[$s3] = %h, [$s4] = %h, [$s5] = %h\n[$s6] = %h, [$s7] = %h, [$t0] = %h\n[$t1] = %h, [$t2] = %h, [$t3] = %h\n[$t4] = %h, [$t5] = %h, [$t6] = %h\n[$t7] = %h, [$t8] = %h, [$t9] = %h", register[16], register[17], register[18], register[19], register[20], register[21], register[22], register[23], register[8], register[9], register[10], register[11], register[12], register[13], register[14], register[15], register[24], register[25]);
	end
	
endmodule
