#include<stdio.h>

int main()
{
    int icnt=0;

    icnt=1;     //1
    do  //2
    {
        printf("Jay Ganesh..!\n");       //4
        icnt++;     //3
    }   while(icnt<4);

    return 0;
}