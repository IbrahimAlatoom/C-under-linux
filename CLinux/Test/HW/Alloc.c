#include<stdio.h>
#include<stdlib.h>
int **Alloc(int **A , int size)
{  
   
   A = (int**) malloc(sizeof(int*) * size);
   for(int i=0; i < size; ++i)
       A[i]= (int*) malloc(sizeof(int) * size);

   for(int i=0; i < size; ++i)
      for(int j=0; j < size; ++j)
         A[i][j] = rand()%100 + 1;
       
   return A;
}