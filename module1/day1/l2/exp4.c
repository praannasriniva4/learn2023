#include <stdio.h>
#include <ctype.h>

int find_char_type(char ch) {
    int type;
    
    if (isalpha(ch)) {
        if (isupper(ch)) {
            type = 1; // Uppercase letter
        }
        else {
            type = 2; // Lowercase letter
        }
    }
    else if (isdigit(ch)) {
        type = 3; // Digit
    }
    else if (isprint(ch)) {
        type = 4; // Printable symbol
    }
    else {
        type = 5; // Non-printable symbol
    }
    
    return type;
}

int main() {
    char character = '7';
    int type = find_char_type(character);
    
    switch (type) {
        case 1:
            printf("Type: Uppercase Letter\n");
            break;
        case 2:
            printf("Type: Lowercase Letter\n");
            break;
        case 3:
            printf("Type: Digit\n");
            break;
        case 4:
            printf("Type: Printable Symbol\n");
            break;
        case 5:
            printf("Type: Non-printable Symbol\n");
            break;
        default:
            printf("Type: Unknown\n");
            break;
    }
    
    return 0;
}
