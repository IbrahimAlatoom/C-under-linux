#include<stdio.h>
#include<omp.h>
#include<stdlib.h>

int main(int argc , char *argv[])
{
    printf("\nStart....................  ");
    int n = 2;
    if(argc > 1){
        n = atoi(argv[1]);
    }
    omp_set_num_threads(n); // export OMP_NUM__THREAD = ..i
    #pragma omp parallel
    {
        int ID = omp_get_thread_num();

        printf("\nhello world %d " ,ID);

    }
    printf("\nEnd......................\n ");


    return 0;
}
