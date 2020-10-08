#include <stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[])
{
    printf("Number of argc = %d \n",argc -1);
    int sum = 0;
    for(int i = 1 ; i<argc ;i++)
    {   
        
        printf("args[%d] = %s \n",i,argv[i]);
        int x = atoi(argv[i]);
        sum += x;
    }
    printf("\n[Ibrahim : 125648] %d\n",sum);

}