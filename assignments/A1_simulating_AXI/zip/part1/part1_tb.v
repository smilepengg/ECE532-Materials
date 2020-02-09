`timescale 1ns / 1ps

module part1_tb();

	reg [4:0] n;
	reg [31:0] value_in;
	wire [31:0] value_out;

	// instantiate the "design under test" module
	mask532 DUT(
		.n(n),
		.value_in(value_in),
		.value_out(value_out)
		);

	// Your Code Here

endmodule

