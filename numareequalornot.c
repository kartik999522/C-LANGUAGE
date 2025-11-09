#include <stdio.h>

int main() {
    int num1, num2;

    // Read two numbers from user
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check whether they are equal or not
    if (num1 == num2) {
        printf("Both numbers are equal.\n");
    } else {
        printf("The numbers are not equal.\n");
    }

    return 0;
}
