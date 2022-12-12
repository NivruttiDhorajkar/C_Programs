#include<stdio.h>
#include<stdbool.h>

bool checkMax(int x,int y)
{
    //bool iRet = false;

    if(x>y)
    {
        return true;
    }
    else
    {
        return false;
    }

   // return iRet;
}

int main()
{
    int a=0;
    int b=0;
    bool iRet = 0;

    printf("Enter the two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);

   iRet=checkMax(a,b);

    if(iRet == true)
    {
        printf("A is graeter\n");
    }
   else
    {
        printf("B is Grater\n");
    }
    
    return 0;

}