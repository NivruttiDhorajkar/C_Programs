#include<stdio.h>

struct Student
{
    int Marks;
    int Age;
    char Division;

};

int main()
{
    struct Student Obj;             //9 Byte
    struct Student *ptr=NULL;       //struct Student *ptr=&Obj;  //8 Byte
    ptr=&Obj;

    //Indirect Accessing Operator
    ptr->Marks=90;
    ptr->Age=21;
    ptr->Division='c';

    printf("Display Addrss of obj:%d\n",ptr);
    printf("Display Marks:%d\n",ptr->Marks);
    printf("Display Age:%d\n",ptr->Age);
    printf("Display Division:%c\n",ptr->Division);

    return 0;

}