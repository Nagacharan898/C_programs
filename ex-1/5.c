#include <stdio.h>

int main() {
    float length, breadth, rectangleArea, rectanglePerimeter;
    float radius, circleArea, circleCircumference;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%f", &breadth);

    rectangleArea = length * breadth;
    rectanglePerimeter = 2 * (length + breadth);

    printf("Area of the rectangle: %.2f\n", rectangleArea);
    printf("Perimeter of the rectangle: %.2f\n", rectanglePerimeter);

    printf("\nEnter radius of the circle: ");
    scanf("%f", &radius);

    circleArea = 3.14 * radius * radius; 
    circleCircumference = 2 * 3.14 * radius;

    printf("Area of the circle: %.2f\n", circleArea);
    printf("Circumference of the circle: %.2f\n", circleCircumference);

    return 0;
}
