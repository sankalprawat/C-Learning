#include <stdio.h>

int main() {
    float num1, num2, result;

    // Input the numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Check if division is possible
    if (num2 != 0) {
        result = num1 / num2;
        printf("Division: %.2f\n", result);
    } else {
        printf("Division is not possible.\n");
    }

    return 0;
}