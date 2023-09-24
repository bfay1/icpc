CXX=         g++
CXXFLAGS=    -x c++ -g -O2 -std=gnu++20 -static 

default: task

task: task.cpp

PHONY += clean
clean:
	rm -rf task *.o a.out
	
PHONY += run
run:
	cat input.txt | ./task
	
.PHONY: $(PHONY)
