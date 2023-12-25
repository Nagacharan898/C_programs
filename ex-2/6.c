#include <stdio.h>
#include <math.h>

int main() {
    float t, v, wcf;

    printf("Enter the temperature (in Fahrenheit): ");
    scanf("%f", &t);

    printf("Enter the wind velocity (in miles per hour): ");
    scanf("%f", &v);

    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

    printf("Wind Chill Factor: %.2f Fahrenheit\n", wcf);

    return 0;
}
