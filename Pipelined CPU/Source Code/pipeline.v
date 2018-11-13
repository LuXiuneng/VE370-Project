`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:24:38 11/17/2017 
// Design Name: 
// Module Name:    pipeline 
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
module pipeline(clock, reset,register_switch, pc_out, register_out
    );

input clock, reset;
input [4:0] register_switch;

output [31:0]pc_out;
output [31:0]register_out;
reg[31:0] pc_out;
reg[31:0] register_out;

wire [31:0] pcin,pcout,registerout;
wire pcwrite;

wire [31:0]instruction;

wire [31:0]pcadd4;




                                           /* ~~~~~~~~~~~~~~~~~~~~ÉÏÃæÊÇIF,ÏÂÃæÊÇID~~~~~~~~~~~~~~~~~~~~~ */










PC pc_a(pcin,pcout,pcwrite,clock,reset);
Instruction_Memory ins_a(pcout,instruction);
reg [63:0] ifid;
reg [150:0] idex;
reg [72:0]exmem;
reg [70:0]memwb;
initial begin ifid<=64'b0; end

wire IF_flush, IIwrite;
always @(posedge clock or posedge reset) begin 
	if (reset) ifid <=0;
	else if (IF_flush) begin ifid[63:32]<=0; ifid[31:0]<=ifid[31:0]; end
	else if (IIwrite) begin
	ifid[31:0]<=pcadd4;
	ifid[63:32]<=instruction;
	end
	else ifid<=ifid;
end



assign pcadd4=pcout+32'h4;


wire [31:0]signextensionresult; /*ÇÃºÚ°å*/









Sign_Extension s_a(ifid[63:58], ifid[47:32],signextensionresult);
wire RegDst, Jump, Branch_beq, Branch_bne, MemRead, MemtoReg,  MemWrite, ALUSrc, RegWrite;
wire [1:0] ALUOp;
Control_Unit ctrl_a(ifid[63:58],RegDst, Jump, Branch_beq, Branch_bne, MemRead, MemtoReg, ALUOp, MemWrite, ALUSrc, RegWrite);
wire ControlMUX;
wire shibushiling;
HazardDetectionUnit hazard_a(ifid[57:53], ifid[52:48], idex[9:5], idex[149], pcwrite, IIwrite, ControlMUX, Branch_beq, Branch_bne, exmem[69],exmem[4:0], idex[145], idex[4:0], idex[150],RegDst,Jump, IF_flush, shibushiling); //(IIRs, IIRt, IERt, IEMemRead, PCWrite, IIWrite, ControlMUX, beq, bne, EMMemRead, EmRt, IERegWrite, IERd, IERegDst)

wire [31:0]WriteData;
wire [31:0] RdData1,RdData2; 
wire [31:0]ifzeroin0,ifzeroin1;
Register_File reg_a(register_switch, registerout, ifid[57:53], ifid[52:48], memwb[4:0], WriteData, memwb[70], RdData1, RdData2, clock);
wire FwA,FwB;
mux #(32) id_forwarding_a(RdData1,exmem[68:37],ifzeroin0,FwA);
mux #(32) id_forwarding_b(RdData2,exmem[68:37],ifzeroin1,FwB);
Zero zero_a( ifzeroin0, ifzeroin1, shibushiling);

wire [31:0] branch_address_result;
wire [7:0]idexctrl;
wire [31:0]jump_address_result;
Branch_addr branch_addr_a(signextensionresult,ifid[31:0],branch_address_result);

mux #(8) idexcontrol(8'b0,{RegDst, MemRead, MemtoReg,  MemWrite, ALUSrc, RegWrite,ALUOp[1:0]},idexctrl,ControlMUX);

Jump_addr Jumpaddr_a(ifid[57:32],ifid[31:0],jump_address_result);
PC_Choice pc_choice_a(Branch_beq, Branch_bne, shibushiling, pcadd4,branch_address_result, jump_address_result, Jump, pcin);

                                           /* ~~~~~~~~~~~~~~~~~~~~ÉÏÃæÊÇID,ÏÂÃæÊÇEX~~~~~~~~~~~~~~~~~~~~~ */



initial idex<=0;
always @(posedge clock or posedge reset) begin 
	if (reset) idex <=0;
	else if( IF_flush) idex<=151'b0;
else begin
	idex[150:143]<= idexctrl; //idex[150] RegDst; idex[149]MemRead ; idex[148]MemtoReg ; idex[147]MemWrite ; idex[146]ALUSrc ; idex[145]RegWrite ; idex[144:143] ALUOp
	idex[142:111]<= pcadd4;
	idex[110:79]<= RdData1;
	idex[78:47]<=RdData2;
	idex[46:15]<=signextensionresult;
	idex[14:10]<=ifid[57:53]; //IERs
	idex[9:5]<=ifid[52:48]; //IERt
	idex[4:0]<=ifid[47:43]; //IERd
end
end
wire [31:0]aluin0,aluin1,FBMUXres;
wire [1:0] FA,FB;
assign aluin0=(FA[1]) ? exmem[68:37]: ((FA[0]) ? WriteData: idex[110:79]);
assign FBMUXres=(FB[1]) ? exmem[68:37]:((FB[0])? WriteData: idex[78:47]);

/* ~ÎÒÊÇ·Ö½çÏß~ */
/*  ~ºóÃæÊÇÄã×ßÒÔºóÐ´µÄ~  */


mux aluin(FBMUXres,idex[46:15],aluin1,idex[146]);
wire [3:0] ALUCtl;
ALU_Control alu_cntl(idex[20:15], idex[144:143], ALUCtl);//(funct, ALUOp, ALUCtl)
wire [31:0]ALU_Result;
ALU alu(aluin0, aluin1, ALUCtl, ALU_Result);//(Data1, Data2, ALUCtl, ALU_Result);
wire [4:0]WriteReg;
mux #5 regiter_destination(idex[9:5], idex[4:0], WriteReg, idex[150]);//(in0,in1,out,sel);
Bypassign_Unit bypassunit(FA,FB,idex[14:10],idex[9:5], exmem[4:0], exmem[72], memwb[4:0], memwb[70],FwA, FwB, Branch_beq, Branch_bne, ifid[57:53], ifid[52:48]);//(FA, FB, IERs, IERt, EMRd, EMRegWrite, MWRd, MWRegWrite, FwA, FwB, beq, bne, IIRs, IIRt);

                                           /* ~~~~~~~~~~~~~~~~~~~~ÉÏÃæÊÇEX,ÏÂÃæÊÇMEM~~~~~~~~~~~~~~~~~~~~~ */


initial exmem<=0;
always@(posedge clock or posedge reset) begin 
	if (reset) exmem <=0;
	else begin exmem[72] <=idex[145]; //RegWrite
exmem[71] <=idex[148]; //MemtoReg
exmem[70] <=idex[147]; //MemWrite
exmem[69] <=idex[149]; //MemRead
exmem[68:37] <=ALU_Result; //EMALUresult
exmem[36:5] <= FBMUXres; //EMRdData2
exmem[4:0] <=WriteReg; //WriteReg
end
end
wire [31:0]Data_out;
Data_Memory data_mem(exmem[70], exmem[69], exmem[68:37], exmem[36:5], Data_out, clock); //(MemWrite, MemRead,  DAddress, Data_in, Data_out, clock);

                                           /* ~~~~~~~~~~~~~~~~~~~~ÉÏÃæÊÇMEM,ÏÂÃæÊÇWB~~~~~~~~~~~~~~~~~~~~~ */

initial memwb<=0;
always@(posedge clock or posedge reset) begin
	if(reset) memwb<=0;
	else begin 
memwb[70] <=exmem[72]; //RegWrite
memwb[69] <=exmem[71]; //MemtoReg
memwb[68:37] <=Data_out; //DM_Data_out
memwb[36:5] <=exmem[68:37]; //ALUResult
memwb[4:0] <=exmem[4:0]; //WriteReg
end
end
mux choose_writedata( memwb[36:5],memwb[68:37], WriteData, memwb[69] );
always@(*) begin
	pc_out <= pcout;
	register_out <= registerout;
end
endmodule
