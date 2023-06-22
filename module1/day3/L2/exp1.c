#include <stdio.h>

void setBit(unsigned char *num, int pos) {
    *num |= (1 << pos);
}

void clearBit(unsigned char *num, int pos) {
    *num &= ~(1 << pos);
}

void toggleBit(unsigned char *num, int pos) {
    *num ^= (1 << pos);
}

int main() {
    unsigned char number = 0b01010101; // Example 8-bit number

    printf("Original Number: 0x%X\n", number);

    setBit(&number, 2); // Set bit at position 2
    printf("After Setting Bit: 0x%X\n", number);

    clearBit(&number, 5); // Clear bit at position 5
    printf("After Clearing Bit: 0x%X\n", number);

    toggleBit(&number, 0); // Toggle bit at position 0
    printf("After Toggling Bit: 0x%X\n", number);

    return 0;
}
