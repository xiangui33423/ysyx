sim:
	verilator --trace --build --top-module alu  --cc alu.v adder.v  --exe sim_main.cpp 
	./obj_dir/Valu
	gtkwave wave.vcd