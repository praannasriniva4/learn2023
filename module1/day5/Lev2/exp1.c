#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;  // Leap year
    else
        return 0;  // Not a leap year
}

int getMonthDays(int month, int year) {
    int days;

    switch (month) {
        case 2:
            if (isLeapYear(year))
                days = 29;
            else
                days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }

    return days;
}

int calculateDays(char date[]) {
    int day, month, year;
    char *token;

    // Extracting day, month, and year from the date string
    token = strtok(date, "/");
    day = atoi(token);

    token = strtok(NULL, "/");
    month = atoi(token);

    token = strtok(NULL, "/");
    year = atoi(token);

    int i, days = 0;

    for (i = 1; i < year; i++) {
        if (isLeapYear(i))
            days += 366;
        else
            days += 365;
    }

    for (i = 1; i < month; i++)
        days += getMonthDays(i, year);

    days += day;

    return days;
}

int main() {
    char date[11];

    printf("Enter the date (DD/MM/YYYY): ");
    fgets(date, sizeof(date), stdin);

    // Removing the newline character from the input
    date[strcspn(date, "\n")] = '\0';

    int days = calculateDays(date);

    printf("Number of days elapsed: %d\n", days);

    return 0;
}
