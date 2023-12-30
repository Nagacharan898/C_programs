#include<stdio.h>
int main()
{
   int i,fact=1,num;
   scanf("%d",&num);
   printf("Ener a number = ");
   for(i=1;i<=num;i++)
   {
      fact*=num;
   }
   printf("%d",fact);
   return 0;
}