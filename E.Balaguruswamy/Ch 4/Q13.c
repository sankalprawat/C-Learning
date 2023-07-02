#include <stdio.h>

int main() {
    int customerCode, callsMade;
    float bill;

    printf("Enter the customer code (0 to exit): ");
    scanf("%d", &customerCode);

    while (customerCode != 0) {
        printf("Enter the number of calls made: ");
        scanf("%d", &callsMade);

        if (callsMade <= 100) {
            bill = 250.0;
        } else {
            bill = 250.0 + (callsMade - 100) * 1.25;
        }

        printf("Customer Code: %d\n", customerCode);
        printf("Number of calls made: %d\n", callsMade);
        printf("Bill amount: Rs. %.2f\n\n", bill);

        printf("Enter the customer code (0 to exit): ");
        scanf("%d", &customerCode);
    }

    return 0;
}
