#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[4];

    int *p=NULL;


    p=(int *)malloc(sizeof(int)* 4);

    //use the memory

    free(p);
    //free memory

    return 0;
}