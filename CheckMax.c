#include<stdio.h>
#include<stdbool.h>

void checkMax(int x,int y)
{
    if(x >y)
    {
        printf("A is graeter\n");
    }
    else
    {
        printf("B is Greater\n");
    }
}

int main()
{
    int a=0;
    int b=0;

    printf("Enter the two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);

    checkMax(a,b);
    
    return 0;

}