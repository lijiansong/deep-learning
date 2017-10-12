PROJECT = main
SRC_DIR ?= $(PWD)
CC = g++ -g
SOURCES = $(SRC_DIR)/main.cc \
          $(SRC_DIR)/src/utils/utils.cc

INCLUDES = $(SRC_DIR)/include

all:
	$(CC) -I $(INCLUDES) $(SOURCES) -o $(PROJECT)
clean:
	rm -f $(PROJECT) *.txt

