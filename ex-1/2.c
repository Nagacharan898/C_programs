#include <stdio.h>

int main(){
    float km,meters,cm;
    float feet,inches;
    printf("Enter the number of kilometers: ");
    scanf("%f",&km);

    //convert into meters
    meters = km *1000;
    printf("In meters: %0.2f\n",meters);

    //convert to feet
    feet =  meters * 3.28;
    printf("In feet: %0.2f\n",feet);

    //convert to inches
    inches = feet * 12;
    printf("In inches: %0.2f\n",inches);

    //convert to centimeters;
    cm = meters * 100;
    printf("In centimeters: %0.2f\n",cm);

    return 0; 
}