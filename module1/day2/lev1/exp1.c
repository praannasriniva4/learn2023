// program to print exponent part of double variable in hexadecimal and binary format.
#include <stdio.h>
#include <stdint.h>

void printExponent(double num) {
    uint64_t* ptr = (uint64_t*)&num;
    uint64_t exponentMask = 0x7FF0000000000000ULL;
    uint64_t exponent = (*ptr & exponentMask) >> 52;

    printf("Exponent in hexadecimal: 0x%03llx\n", exponent);

    // Convert exponent to binary
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; --i) {
        putchar((exponent >> i) & 1 ? '1' : '0');
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}