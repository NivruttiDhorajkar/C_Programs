#include<stdio.h>

static int Global_Static=10;

void Fun_Normal()
{
    static int i=10;
    ++i;

    printf("\n Value of i from Fun_Normal is %d",i);
    printf("\n Address of static variable is %u",&i);   
}

void Gun_Recursive_Static()
{
    static int i=5;
    i--;
    if(i!=0)
    {
        printf("\n In Gun_Recursive_Static value of i is %d",i);

        Gun_Recursive_Static();
    }
}
void Gun_Recursive_Auto()
{
    auto int i=5;
    i--;
    if(i!=0)
    {
        printf("\n In Gun_Recursive_Auto value of i is %d",i);
        Gun_Recursive_Auto();
    }
}
int main()
{
    Fun_Normal();
    Fun_Normal();
    Fun_Normal();
    Gun_Recursive_Static();
    //Gun_Recursive_Auto();
    return 0;
}