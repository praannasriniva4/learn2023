#include <stdio.h>

#define DECIMAL_TO_BCD(decimal) (((decimal / 10) << 4) | (decimal % 10))

void decimalToBCD(unsigned char *bcd, int decimal) {
    *bcd = DECIMAL_TO_BCD(decimal);
}

int main() {
    int decimalNumber = 45; 
    unsigned char bcdNumber;

    decimalToBCD(&bcdNumber, decimalNumber);

    printf("Decimal Number: %d\n", decimalNumber);
    printf("BCD Number: 0x%X\n", bcdNumber);

    return 0;
}
