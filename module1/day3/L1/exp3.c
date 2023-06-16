#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int divisor = 1;
    int temp;

    while (divisor <= num) {
        temp = (num / (divisor * 10)) * divisor + (num % divisor);
        if (temp > largest) {
            largest = temp;
        }
        divisor *= 10;
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    int largestNumber = findLargestNumber(number);

    printf("The largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}