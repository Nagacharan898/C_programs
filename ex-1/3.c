#include <stdio.h>

int main(){
    int s1,s2,s3,s4,s5;
    float total , percentage;

    printf("Enter marks for 5 subjects: ");
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    scanf("%d",&s4);
    scanf("%d",&s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = (total / 500) * 100;

    printf("total is %0.2f",total);
    printf("percentage is %0.2f",percentage);
    return 0;
}