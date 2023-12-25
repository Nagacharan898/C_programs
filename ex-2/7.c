#include <stdio.h>
#include <math.h>

int main() {
    int angle_degrees;

    printf("Enter the angle in degrees: ");
    scanf("%d", &angle_degrees);

    float angle_radians = angle_degrees * M_PI / 180.0;

    float sin_value = sinf(angle_radians);
    float cos_value = cosf(angle_radians);
    float tan_value = tanf(angle_radians);

    float cosec_value = (sin_value != 0) ? 1.0f / sin_value : INFINITY;
    float sec_value = (cos_value != 0) ? 1.0f / cos_value : INFINITY;
    float cot_value = (tan_value != 0) ? 1.0f / tan_value : INFINITY;

    printf("Trigonometric Ratios for %d degrees:\n", angle_degrees);
    printf("sin: %.4f\n", sin_value);
    printf("cos: %.4f\n", cos_value);
    printf("tan: %.4f\n", tan_value);
    printf("cosec: %.4f\n", cosec_value);
    printf("sec: %.4f\n", sec_value);
    printf("cot: %.4f\n", cot_value);

    return 0;
}
