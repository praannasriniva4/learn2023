#include <stdio.h>

void decimalToBinaryRecursive(int decimal, int binary[], int index) {
    if (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        decimalToBinaryRecursive(decimal, binary, index + 1);
    }
}

void decimalToOctalRecursive(int decimal, int octal[], int index) {
    if (decimal > 0) {
        octal[index] = decimal % 8;
        decimal /= 8;
        decimalToOctalRecursive(decimal, octal, index + 1);
    }
}

void decimalToHexadecimalRecursive(int decimal, char hexadecimal[], int index) {
    char hexChars[] = "0123456789ABCDEF";
    
    if (decimal > 0) {
        hexadecimal[index] = hexChars[decimal % 16];
        decimal /= 16;
        decimalToHexadecimalRecursive(decimal, hexadecimal, index + 1);
    }
}

void printArray(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

void printHexArray(char arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main() {
    int decimal = 345;
    int binary[32] = {0};
    int octal[32] = {0};
    char hexadecimal[32] = {0};
    
    decimalToBinaryRecursive(decimal, binary, 0);
    printf("Decimal to Binary: ");
    printArray(binary, 32);
    
    decimalToOctalRecursive(decimal, octal, 0);
    printf("Decimal to Octal: ");
    printArray(octal, 32);
    
    decimalToHexadecimalRecursive(decimal, hexadecimal, 0);
    printf("Decimal to Hexadecimal: ");
    printHexArray(hexadecimal, 32);
    
    return 0;
}
