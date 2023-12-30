#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,i,j,term;
    float sol,sum;
    printf("Enter the value of x = ");
    scanf("%d",&x);
    term=(x-1)/x;
    sum=term;
    int power=2;
    for(i=1;i<=6;i++)
    {
	sol=pow(term,a)/2;
	sum=sum+sol;
	a++;
    }
    printf("%f is the sum of the series.\n", sum);
    return 0;
}