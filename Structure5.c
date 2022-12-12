#include<stdio.h>

struct Demo
{
    int no;
    float f;
};

int main()
{
   struct Demo Arr[3];

    Arr[0].no=10;
    Arr[0].f=90.4;

    Arr[1].no=20;
    Arr[1].f=15.5;

    Arr[2].no=30;
    Arr[2].f=30.5;

    printf("Address of array is:%d\n",Arr);
    printf("Size of whole arry ussing size of oprator:%d\n",sizeof(Arr));
    printf("Size of structure:%d\n",sizeof(struct Demo));

    printf("Value of first integer element is:%d\n",Arr[0].no);
    printf("Value of first float element is:%f\n",Arr[0].f);

    printf("value of second integer element is:%d\n",Arr[1].no);
    printf("Value of second float elemnet is:%f\n",Arr[1].f);

    printf("Value of third integer element is:%d\n",Arr[2].no);
    printf("Value of third float element is:%f\n",Arr[2].f);


    return 0;
}