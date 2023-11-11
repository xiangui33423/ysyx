NPC_HOME=/home/xiangui/ysyx-workbench/npc
VERILATOR_CFLAGS=-MMD --build --cc  --trace --exe\
	-O3 --x-assign fast --x-initial fast --noassert 
YSYX=ysyx_23060096_
FILE=RegisterFile
TOP_FILE=RegisterFile
VFILES=$(wildcard vsrc/*.v)
CFILES=$(wildcard csrc/*.cpp)
CFILE=$(NPC_HOME)/csrc/$(FILE).cpp
VTOP=$(YSYX)$(TOP_FILE)

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_CFLAGS) $(CFILE) $(VFILES) --top-module $(VTOP)
	# ./obj_dir/V$(YSYX)$(FILE)
	# gtkwave wave.vcd



include ../Makefile
