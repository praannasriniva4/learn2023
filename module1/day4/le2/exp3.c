#include <stdio.h>

int main() {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month, day;
    int totalDays = 0;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    printf("Enter the day (1-31): ");
    scanf("%d", &day);

  
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Invalid date input.\n");
        return 0;
    }

    // Calculate total days elapsed
    for (int i = 0; i < month - 1; i++) {
        totalDays += daysInMonth[i];
    }
    totalDays += day;

    printf("Number of days elapsed in the year: %d\n", totalDays);

    return 0;
}
