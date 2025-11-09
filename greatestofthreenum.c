#include <stdio.h>

int main() {
    int a, b, c;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using nested if...else to find the greatest number
    if (a > b) {
        if (a > c) {
            printf("%d is the greatest number.\n", a);
        } else {
            printf("%d is the greatest number.\n", c);
        }
    } else {
        if (b > c) {
            printf("%d is the greatest number.\n", b);
        } else {
            printf("%d is the greatest number.\n", c);
        }
    }

    return 0;
}
