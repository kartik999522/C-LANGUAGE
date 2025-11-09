#include <stdio.h>

int main() {
    float radius, area;

    // Read radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area of circle
    area = 3.14159 * radius * radius;

    // Display result in floating-point and exponential form
    printf("Area of the circle (floating-point): %.4f\n", area);
    printf("Area of the circle (exponential form): %.4e\n", area);

    return 0;
}
