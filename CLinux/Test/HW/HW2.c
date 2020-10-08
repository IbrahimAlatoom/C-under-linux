#include<stdio.h>
#include<stdlib.h>
#include <omp.h>

int **Alloc(int **A,int a);
void  Free(int **A,int a);

int main( int argc, char* argv[] )
{ 

   double start; 
   double end; 
   int size = atoi(argv[1]);
   int **A;
   int **B;
   int **C;
   int id;
   A=Alloc(A,size);
   B=Alloc(B,size);     
   C=Alloc(B,size);

   start=omp_get_wtime();
   //omp_set_num_threads(2048);
   #pragma omp parallel num_threads(2048)
   {  
      id = omp_get_num_threads() ;
   #pragma omp for schedule (static)     
      for(int i=0;i<size;i++)    
      {    
         for(int j=0;j<size;j++)    
         {    
            C[i][j]=0;    
            for(int k=0;k<size;k++)    
            {    
               C[i][j]+=A[i][k]*B[k][j];    
            }    
         }    
      }  
   }
   end = omp_get_wtime();
   printf("~Work took %f seconds\n~", end - start);
   printf("num Threads %d \n",id);
   Free(A,size);
   Free(B,size);
   Free(C,size);
   return 0;
}
 


 

