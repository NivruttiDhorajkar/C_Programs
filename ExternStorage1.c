#include<stdio.h>

int global=10;
int main()
{
    extern int i;
    extern void fun();

    printf("\n Value of external variable i is %d",i);

    fun();
    return 0;
}