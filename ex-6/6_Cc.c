#include<stdio.h>
int main()
{
 int i,j,fact;
 float sum=0,d;
 for(i=1;i<=7;i++)
 {
   fact=1;
   for(j=1;j<=i;j++)
   {
     fact=fact*j;
   }
   d=i/fact;
   sum=sum+d;
  }
  printf("Sum of first seven terms is = %d",sum);
  return 0;
 }