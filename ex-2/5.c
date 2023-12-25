#include <stdio.h>
#include <math.h>
int main(){
    float L1,L2,G1,G2;
    float distance;

    printf("Enter the values of latitudes L1 & L2: ");
    scanf("%f",&L1);
    scanf("%f",&L2);

    printf("Enter the values of longitudes G1 & G2: ");
    scanf("%f",&G1);
    scanf("%f",&G2);

    L1 = L1 * M_PI / 180;
    L2 = L2 * M_PI / 180;
    G1 = G1 * M_PI / 180;
    G2 = G2 * M_PI / 180;

    distance = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

    printf("The distance between the given latitude and the longitude is: %.2f",distance);

    return 0;
}