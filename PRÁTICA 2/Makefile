CC = gcc
LIBS = -lm
SRC = src
OBJ = obj
INC = include
BIN = bin
OBJS = $(OBJ)/main.o $(OBJ)/fatorial.o $(OBJ)/fibonacci.o $(OBJ)/tmp.o 
HDRS = $(INC)/fatorial.h $(INC)/fibonacci.h $(INC)/tmp.h
CFLAGS = -Wall -c -I $(INC)

EXE = $(BIN)/main

run: $(EXE)
	$(EXE) -a 5
	$(EXE) -b 5
	$(EXE) -c 5
	$(EXE) -d 5

$(BIN)/main: $(OBJS)
	$(CC) -pg -o $(BIN)/main $(OBJS) $(LIBS)

$(OBJ)/main.o: $(HDRS) $(SRC)/main.c
	$(CC) $(CFLAGS) -o $(OBJ)/main.o $(SRC)/main.c 

$(OBJ)/fatorial.o: $(HDRS) $(SRC)/fatorial.c
	$(CC) $(CFLAGS) -o $(OBJ)/fatorial.o $(SRC)/fatorial.c 

$(OBJ)/fibonacci.o: $(HDRS) $(SRC)/fibonacci.c
	$(CC) $(CFLAGS) -o $(OBJ)/fibonacci.o $(SRC)/fibonacci.c 

$(OBJ)/tmp.o: $(HDRS) $(SRC)/tmp.c
	$(CC) $(CFLAGS) -o $(OBJ)/tmp.o $(SRC)/tmp.c 
	
clean:
	rm -f $(EXE) $(OBJS) gmon.out