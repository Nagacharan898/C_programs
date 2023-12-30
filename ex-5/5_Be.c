#include<stdio.h>
int main()
{
  int i,rem,num=0,x;
  for(i=1;i<=500;i++)
  {
    num=0;
    x=i;
    while(x)
    {
      rem=x%10;
      num=num+(rem*rem*rem);
      x/=10;
    }
    if(num==i)
    printf("%d is a armstrong number\n",i);
    }
  return 0;
}