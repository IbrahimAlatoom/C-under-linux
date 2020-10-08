#include<stdio.h>
#include<stdlib.h>

void my_print(int [],int);
int main( int argc, char* argv[] )
{ 
/*
   printf("%d\n", argc);
   for(int i=0; i < argc; ++i)
      printf("%s\n",argv[i]);
*/   
   int size_x = atoi(argv[1]);
   int size_y = atoi(argv[2]);
   
	int *x, *y;
   x = (int*) malloc(sizeof(int) * size_x);
   y = (int*) malloc(sizeof(int) * size_y);
   
   for(int i=0; i < size_x; ++i)
      x[i] = rand()%100 + 1;

   for(int i=0; i < size_y; ++i)
      y[i] = rand()%100 + 1;
   
   my_print(x,size_x);
   

   
   free(x);
	free(y);
   
   
   //scanf("%d", x);
	//scanf("%d", y);
   /*
	printf("\n Hi this is our first C Program under Linux \n");
	printf("\n Result = %d and it is integer \n", *x + *y);
   */
	return 0;
}
