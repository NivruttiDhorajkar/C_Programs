#include<stdio.h>

void fun()
{
    auto int i;
    auto int j=10;
    int k=30;

    printf("Scope of auto variables starts from here in function fun \n");
    printf("Default value of utilisatised auto variable is %d ",i);
    printf("\nScope of auto variables ends here in function fun \n ");
}

int main()
{
    fun(10);
    return 0;

}