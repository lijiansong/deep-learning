# The path where the vectorize.h header lives
VECTORIZE_DIR = ..

# Path to the vectorize header
VECTORIZE_HEADER = $(VECTORIZE_DIR)/vectorize.h

# Where to find user code.
USER_DIR = .

# Flags passed to the preprocessor.
CPPFLAGS += -I$(GTEST_DIR)/include -I$(VECTORIZE_DIR)

# Flags passed to the C++ compiler.
CXXFLAGS += -O2 -std=c++0x -Wall -Wextra -Werror

# Use clang as the compiler. Comment this out to use the default.
#CXX = /usr/local/bin/clang++
CXX = clang++

# All outputs produced by this Makefile.
#OUTPUTS = apply2add.o
OUTPUTS = add

# House-keeping build targets.

all :
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $(USER_DIR)/apply2add.cpp -o add

clean :
	@rm -f *.o
	@rm -f $(OUTPUTS)

