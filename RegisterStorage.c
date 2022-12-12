#include<stdio.h>

void fun()
{
    register int i;
    register double d=3.12;

}

void gun()
{
    register int i;
    for(i=10;i>=0;--i)
    {
        printf("%d\n" ,i);
    }
}

int main()
{
    fun();
    gun();
    return 0;
}