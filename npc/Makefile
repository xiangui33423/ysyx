NPC_HOME=/home/xiangui/ysyx-workbench/npc
VERILATOR_CFLAGS=-MMD --build --cc  --trace --exe\
	-O3 --x-assign fast --x-initial fast --noassert 
YSYX=ysyx_23060096
FILE=RegisterFile
VFILES=$(wildcard vsrc/*.v)
CFILES=$(wildcard csrc/*.cpp)
CFILE=$(NPC_HOME)/csrc/$(FILE).cpp
VTOP=$(NPC_HOME)/vsrc/ysyx_23060096_RegisterFile.v

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator $(VERILATOR_CFLAGS) $(CFILE) $(VTOP)

include ../Makefile
