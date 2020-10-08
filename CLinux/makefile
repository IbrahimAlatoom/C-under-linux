# Simple Makefile with use of gcc could look like this
CC  =gcc
OBJ = my_print.o main.o 
EXE = a.out

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

main.o: main.c 
	$(CC) -c main.c


my_print.o: my_print.c 
	$(CC) -c my_print.c
	
clean:
	-rm *.o
	-rm $(EXE)
	