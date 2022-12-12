#include<stdio.h>

struct Demo
{
    int no;
    struct Demo *next;
};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    obj1.no=11;
    obj2.no=21;
    obj3.no=31;

    obj1.next=&obj2;
    obj2.next=&obj3;
    obj3.next=NULL;

   printf("%d\n",obj1.no);
   printf("%d\n",obj1.next);
   printf("%d\n",obj1.next->no);
   printf("%d\n",obj1.next->next->no);
   printf("%d\n",obj3.next);
    return 0;
}