#include <stdio.h>
#include <stdlib.h>

int calculateTotalSeconds(char *timeString) {
    
    int hours, minutes, seconds;
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);

    
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;

    return totalSeconds;
}

int main() {
    char timeString1[] = "10:12:50";
    char timeString2[] = "13:10:40";

    int totalSeconds1 = calculateTotalSeconds(timeString1);
    int totalSeconds2 = calculateTotalSeconds(timeString2);

    printf("Input Time 1: %s\n", timeString1);
    printf("Total Seconds 1: %d\n", totalSeconds1);

    printf("Input Time 2: %s\n", timeString2);
    printf("Total Seconds 2: %d\n", totalSeconds2);

    return 0;
}
