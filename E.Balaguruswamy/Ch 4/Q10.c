#include <stdio.h>

int main() {
    int a, b, c;
    int largest;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The largest value is: %d\n", largest);

    return 0;
}  