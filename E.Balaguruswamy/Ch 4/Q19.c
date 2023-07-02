#include <stdio.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}

int main() {
    int day, month, year;
    printf("Enter a date in DD/MM/YY format: ");
    scanf("%d%d%d", &day, &month, &year);

    int isLeap = isLeapYear(year);
    int maxDays;

    switch (month) {
        case 2:
            maxDays = isLeap ? 29 : 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            maxDays = 30;
            break;
        default:
            maxDays = 31;
            break;
    }

    if (day > maxDays) {
        printf("The given date is incorrect. %d has %d days in %d.\n", month, maxDays, year);
    } else {
        printf("The given date is correct!\n");
    }

    return 0;
}
