#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s,area;

    printf("Enter the values of sides of triangles: ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    s = (a + b + c)/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle with given sides is: %.2f",area);

    return 0;
}