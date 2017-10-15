PROJECT = main
SRC_DIR ?= $(PWD)
CC = g++ -g
SOURCES = $(SRC_DIR)/main.cc \
          $(SRC_DIR)/src/utils/utils.cc

INCLUDES = $(SRC_DIR)/include

all:
	@echo compiling $(SOURCES)
	$(CC) -I $(INCLUDES) $(SOURCES) -o $(PROJECT)
clean:
	@rm -f $(PROJECT) *.txt

