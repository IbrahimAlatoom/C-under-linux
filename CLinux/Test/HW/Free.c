#include<stdio.h>
#include<stdlib.h>
#include <omp.h>
void Free(int **A , int size)
{
   for (int i = 0; i < size; i++){  
       free(A[i]);  
    }     
    free(A);
}