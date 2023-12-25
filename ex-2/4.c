#include <stdio.h>
#include <math.h>

int main() {
    float x, y, r, phi_degrees;

    printf("Enter the coordinates of the point (x, y): ");
    scanf("%f", &x);
    scanf("%f", &y);

    r = sqrt(x * x + y * y);

    // Calculate the angle in radians
    float phi_radians = atan2(y, x);

    // Convert radians to degrees
    phi_degrees = phi_radians * (180 / M_PI);

    printf("The polar coordinates of the point (%.1f,%.1f) are: (%.1f,%.1f degrees)\n", x, y, r, phi_degrees);

    return 0;
}
