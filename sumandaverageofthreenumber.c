#include <stdio.h>

int main() {
    float num1, num2, num3, sum, average;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate sum and average
    sum = num1 + num2 + num3;
    average = sum / 3;

    // Display results
    printf("\nSum = %.2f", sum);
    printf("\nAverage = %.2f\n", average);

    return 0;
}
