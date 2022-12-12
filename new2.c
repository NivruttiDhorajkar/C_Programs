#include<stdio.h>
#include<stdlib.h>

int main()
{
   int Arr[5];

    void *p=NULL;

    p=(int*)malloc(sizeof(int)*5);

    printf("Address of Arr:%d\n",&Arr);

    printf("Adress of first index element:%d\n",Arr+1);
    printf("Address of last:%d\n",(&Arr)+1);

    printf("size of p:%d\n",sizeof(p));
    printf("Address of p:%d\n",&p);
    printf("Address of p:%d\n",&p+1);
    
    free(p);
    return 0; 
}
