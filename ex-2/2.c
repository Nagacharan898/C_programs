#include <stdio.h>

int main(){
    int num;
    int s = 0;
    printf("Enter a five digit number: ");
    scanf("%d",&num);

    for(int i=0;i<5;i++){
        s = s * 10 + num % 10;
        num = num / 10;
    }

    printf("The reverse of %d is: %d",num,s);

    return 0;
}