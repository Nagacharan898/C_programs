#include<stdio.h>
int main()
{
  int n,i,mul;
  printf("Enter a number = ");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
  mul=n*i;
  printf("%d * %d = %d\n",n,i,mul);
  } 
return 0;
}