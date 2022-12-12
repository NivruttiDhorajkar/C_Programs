/*#include<stdio.h>

int main()
{
    int ino1=10;
    int ino2=20;
    int ians=0;

    ians=ino1+ino2;

    printf("%d",ians);

    return 0;
}*/
































#include<stdio.h>

int Addition (int iValue1,int iValue2)
{
    int iOutput =0;

    iOutput=iValue1 + iValue2;

    return iOutput;
}
int main()

{
    int iNo1 = 0;
    int iNo2 =0 ;
    int iAns = 0;

    iAns = Addition (iNo1,iNo2);
    printf("Addition is %d",iAns);

    return 0;
}