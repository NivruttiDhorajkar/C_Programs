#include <stdio.h>
#include <stdlib.h>
int main() 
{
   int n , i, *p = NULL, s = 0;

   printf("Enter the number\n");

   scanf("%d", &n);

   p =(int *) malloc(n * sizeof(int));

       printf("Enter the address  \n %p", p);

   if(p == NULL) 
   {
      printf("\nError! memory not allocated.");
      exit(0);
   }
   printf("\nEnter elements of array : ");
   
   for(i = 0; i < n; i++) 
   {
      scanf("%d", p + i);
      s += *(p + i);
             printf("Enter the address  \n %p", &p);
   }
          printf("Enter the address scond last  \n %p", &p);

   printf("\nSum : %d", s);

          printf("Enter the address  \n %p", p);

   return 0;
}