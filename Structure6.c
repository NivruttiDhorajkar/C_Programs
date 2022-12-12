#include<stdio.h>

struct hello
{
    int c;
    float d;
    struct Demo
    {
        int a;
        int b;
    }dobj;
};
int main()
{
    struct hello hobj;

    hobj.c=10;
    hobj.d=50.12;

    hobj.dobj.a=20;
    hobj.dobj.b=30;

    printf("Size of struct hello using size of operator : %d\n",sizeof(struct hello));
    printf("value of c from struct hello : %d\n",hobj.c);
    printf("Value of d from struct hello : %f\n",hobj.d);

    printf("Size of Struct Demo:%d\n",sizeof(struct Demo));

    printf("value of a from struct demo:%d\n",hobj.dobj.a);
    printf("value of b from struct demo:%d\n",hobj.dobj.b);


    return 0;
}