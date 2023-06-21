#include <stdio.h>

int is_vowel(char ch) {
    int result;
    
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            result = 1; // Vowel
            break;
        default:
            result = 0; // Not vowel
    }
    
    return result;
}

int main() {
    char character = 'e';
    int isVowel = is_vowel(character);
    
    if (isVowel == 1) {
        printf("Vowel\n");
    }
    else {
        printf("Not Vowel\n");
    }
    
    return 0;
}
