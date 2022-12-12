#include<stdio.h>



int main()
{
    int No=11;

    //printf("%d\n",No);
    //printf("%d\n",sizeof(No));
    //printf("%p\n",&No);
    //printf("%d\n",&No);

    int *p=&No;

    printf("%d\n",No);
    printf("%d\n",p);
    printf("%d\n",&No);
    printf("%d\n",&p);
    printf("%d\n",sizeof(No));
    printf("%d\n",sizeof(p));

    return 0;
}