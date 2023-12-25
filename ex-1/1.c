#include <stdio.h>

int main() {
    float salary;
    float DA, HRA;
    float gross_salary;
    
    printf("Enter the salary amount: ");
    scanf("%f", &salary);
    
    DA = (40 * salary) / 100;
    HRA = (20 * salary) / 100;
    gross_salary = salary + DA + HRA;
    
    printf("The gross salary for the given salary after allowances is Rs.%0.2f", gross_salary);
    
    return 0;
}
