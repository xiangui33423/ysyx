NPC_HOME=/home/xiangui/ysyx-workbench/npc
VERILATOR_CFLAGS=-MMD --build -cc  --trace --exe\
	-O3 --x-assign fast --x-initial fast --noassert 
VFILES=$(wildcard vsrc/*.v)
CFILES=$(wildcard csrc/*.cpp)
VTOP=$(NPC_HOME)/vsrc/ysyx_23060096_RegisterFile.v

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_CFLAGS) csrc/RegisterFile.cpp $(VTOP)

include ../Makefile
