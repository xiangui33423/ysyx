sim:
	verilator -Wall decoder.v sim_main.cpp --cc --trace --exe --build
	./obj_dir/Vdecoder
	gtkwave wave.vcd