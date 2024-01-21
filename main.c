#include <stdio.h>

int main() {
    // Initialize two numbers
    int num1, num2;

    // Input the numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Compare and find the greatest number
    if (num1 > num2) {
        printf("The greatest number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The greatest number is: %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
