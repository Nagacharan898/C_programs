#include<stdio.h>
int main()
     {
   int population = 100000;
   for(int i = 0; i < 10; i++)
{
	population = population - (population / 100) * 10;
	printf("Year %d : %d\n", 10-i, population );
}
return 0;
   }