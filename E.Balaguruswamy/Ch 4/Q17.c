#include <stdio.h>

unsigned int shiftLeftByTwo(unsigned int data) {
    return data << 2;
}

int main() {
    unsigned int data;
    printf("Enter the data: ");
    scanf("%u", &data);

    unsigned int shiftedData = shiftLeftByTwo(data);
    printf("Shifted data: %u\n", shiftedData);

    return 0;
}