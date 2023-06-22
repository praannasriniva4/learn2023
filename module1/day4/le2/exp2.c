#include <stdio.h>
#include <math.h>
#include <string.h>

// Function to convert binary to decimal
int binaryToDecimal(char binary[]) {
    int length = strlen(binary);
    int decimal = 0;
    
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    
    return decimal;
}

// Function to convert octal to decimal
int octalToDecimal(char octal[]) {
    int length = strlen(octal);
    int decimal = 0;
    
    for (int i = length - 1; i >= 0; i--) {
        decimal += (octal[i] - '0') * pow(8, length - 1 - i);
    }
    
    return decimal;
}

// Function to convert hexadecimal to decimal
int hexToDecimal(char hexadecimal[]) {
    int length = strlen(hexadecimal);
    int decimal = 0;
    
    for (int i = length - 1; i >= 0; i--) {
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9') {
            decimal += (hexadecimal[i] - '0') * pow(16, length - 1 - i);
        } else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F') {
            decimal += (hexadecimal[i] - 'A' + 10) * pow(16, length - 1 - i);
        } else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f') {
            decimal += (hexadecimal[i] - 'a' + 10) * pow(16, length - 1 - i);
        }
    }
    
    return decimal;
}

int main() {
    char binary[] = "101010";
    char octal[] = "52";
    char hexadecimal[] = "1A7";
    
    int decimalBinary = binaryToDecimal(binary);
    printf("Binary to Decimal: %d\n", decimalBinary);
    
    int decimalOctal = octalToDecimal(octal);
    printf("Octal to Decimal: %d\n", decimalOctal);
    
    int decimalHex = hexToDecimal(hexadecimal);
    printf("Hexadecimal to Decimal: %d\n", decimalHex);
    
    return 0;
}
