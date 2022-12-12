#include<stdio.h>

struct Student
{
    int Marks;
    int Age;
    char Division;
};

int main()
{
    struct Student Amit;
    struct Student Pooja;

    Amit.Marks=90;
    Amit.Age=21;
    Amit.Division='c';

    Pooja.Marks=98;
    Pooja.Age=18;
    Pooja.Division='A';

    printf("Display Marks of Amit:%d\n",Amit.Marks);
    

    return 0;
}