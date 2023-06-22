#include <stdio.h>
#include <string.h>

void encodeString(char *string) {
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        string[i] += 3; 
    }
}

void decodeString(char *string) {
    int length = strlen(string);
    for (int i = 0; i < length; i++) {
        string[i] -= 3; 
    }
}

int main() {
    char originalString[] = "Hello, World!";
    char encodedString[100];

    strcpy(encodedString, originalString);

    // Encode the string
    encodeString(encodedString);
    printf("Encoded String: %s\n", encodedString);

    // Decode the string
    decodeString(encodedString);
    printf("Decoded String: %s\n", encodedString);

    return 0;
}
