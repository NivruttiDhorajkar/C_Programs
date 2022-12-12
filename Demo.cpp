#include <iostream>
#include<string.h>
using namespace std;

int main()
{
 char a[100],b[100];
 cout<<"enter your string to check is palindrome \n";
 cin>>a;
 strcpy (b,a);
 strrev(b);
 if(strcmp(a,b)==0)
 cout<<"is palimdrome";
 else
 cout<<"not palindrome";
}