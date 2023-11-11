NPC_HOME=/home/xiangui/ysyx-workbench/npc
VERILATOR_CFLAGS= --build --cc  --trace --exe
	#-O3 --x-assign fast --x-initial fast --noassert 
VFILES=$(wildcard vsrc/*.v)
CFILES=$(wildcard csrc/*.cpp)
VTOP=$(NPC_HOME)/ysyx_23060096_RegiterFile.v

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	-@echo verilator $(VERILATOR_CFLAGS) $(VTOP) csrc/RegisterFile.cpp 

include ../Makefile
