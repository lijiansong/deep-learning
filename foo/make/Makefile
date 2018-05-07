CXX := g++

PROJECT := test
SRC_DIR := (PWD)

SRC := $(wildcard *.cpp) 
DIR := $(notdir $(SRC))
PROJECT_OBJ :=$(patsubst %.cpp,%.o,$(SRC) )

deafult: $(PROJECT)

%.o: $(SRC_DIR)/%.cpp
	$(CXX) -c $+

$(PROJECT): $(PROJECT_OBJ)
	@echo $(PROJECT_OBJ)
	$(CXX) -o $@ $+

clean:
	@rm -f *.o
	@rm -f $(PROJECT)
