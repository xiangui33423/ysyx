NPC_HOME=/home/xiangui/ysyx-workbench/npc
VERILATOR_CFLAGS=-MMD --build -cc  \
	-O3 --x-assign fast --x-initial fast --noassert --trace --exe
VFILES=$(wildcard vsrc/*.v)
CFILES=$(wildcard csrc/*.cpp)
VTOP=$(NPC_HOME)/ysyx_23060096_npc.v

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	-@echo verilator $(VERILATOR_CFLAGS) $(VFILES) csrc/RegisterFile.cpp $(VTOP)

include ../Makefile
