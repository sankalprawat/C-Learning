#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Input the lengths of the sides
    printf("Enter the lengths of the sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%d", &side1);
    printf("Side 2: ");
    scanf("%d", &side2);
    printf("Side 3: ");
    scanf("%d", &side3);

    // Check if the triangle is isosceles
    if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is not isosceles.\n");
    }

    return 0;
}




