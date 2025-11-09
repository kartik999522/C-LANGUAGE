#include<stdio.h>
int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display numbers before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap the numbers using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Display numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}