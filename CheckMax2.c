#include<stdio.h>
#include<stdbool.h>

int checkMax(int x,int y)
{
    if(x>y || y>x) 
     {
        return true;

    }
    else
    {
        return false;

    }
   
}

int main()
{
    int a=0;
    int b=0;

    printf("Enter the two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);

   // iRet=checkMax(&a,&b);
    //iRet=checkMax(&b);

    if(a > b)
    {
        printf("A is graeter\n");
    }
    if(a<b)
    {
        printf("B is grater\n");
    } 
    // if (a==b)
    // {
    //     printf("Number is same\n");
    // }
    
    return 0;

}