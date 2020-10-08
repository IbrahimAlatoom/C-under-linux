# Simple Makefile with use of gcc could look like this
CC  =gcc
OBJ = Alloc.o Free.o HW2.o 
EXE = a.out

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE) -fopenmp

HW2.o: HW2.c 
	$(CC) -c Hw2.c -fopenmp


Alloc.o: Alloc.c 
	$(CC) -c Alloc.c 

Free.o: Free.c 
	$(CC) -c Free.c 

clean:
	-rm *.o
	-rm $(EXE)
	