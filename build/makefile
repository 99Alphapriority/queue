#! /bin/bash
SRC = ../src
INC = ../include
BIN = ../bin
OBJ = ../obj
CC = gcc 

OBJS = $(OBJ)/main.o $(OBJ)/queue.o $(OBJ)/test.o

$(BIN)/test: $(OBJS)
	gcc -o $@ $(OBJS)

$(OBJS): $(OBJ)/%.o: $(SRC)/%.c
	mkdir -p $(OBJ) $(BIN)
	gcc -c -w $< -o $@ -I $(INC)

clean: 
	rm -rf $(BIN) $(OBJS) $(OBJ) 
