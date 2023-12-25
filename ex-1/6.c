#include <stdio.h>

int paper_sizes(int length,int breadth){
    printf("%dmm x %dmm",length,breadth);
    paper_sizes(breadth,length/2);
}
int main(){
    int w = 1189;
    int h = 841;
    int temp;
    for(int i=0;i<=8;i++){
        printf("Dimensions for A%d are: %d x %d\n",i,w,h);
        temp = w;
        w = h;
        h = temp/2;
    }    
    return 0;
}