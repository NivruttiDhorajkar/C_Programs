#include<stdio.h>

int X=10;    //Global variable(Data).

void Demo()
{
    int iB=30;  //Local Variable(Stack)

    printf("value of B from Demo:%d\n",iB);
    printf("value of X from Demo:%d\n",X);

    //print("%d",A)   //Not allowed
}

int main()
{
    int iA=20;  //Local Variable(Stack) 

    printf("value of A from main:%d\n",iA);
    printf("Value of X from main:%d\n",X);

    //printf("%d",B)   //Not allowed

    Demo();     //Function call.

    return 0;
}