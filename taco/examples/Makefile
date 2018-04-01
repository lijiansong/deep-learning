CXX := g++

CXX_FLAGS := -std=c++11

export DYLD_LIBRARY_PATH := $(HOME)/work-space/compile/git/taco/build/lib
TACO_INC := $(HOME)/work-space/compile/git/taco/include 
TACO_LIB_PATH := $(HOME)/work-space/compile/git/taco/build/lib
TACO_LIB := libtaco.dylib

foo: foo.o
	#ln -sf $(TACO_LIB_PATH)/$(TACO_LIB)
	$(CXX) -o $@ $+ -L$(DYLD_LIBRARY_PATH) -ltaco

foo.o: tensor_times_vector.cpp
	$(CXX) -I $(TACO_INC) $(CXX_FLAGS) -o $@ -c $<

clean:
	@rm -f *.o
	@rm -f foo
	@rm -f $(TACO_LIB)

