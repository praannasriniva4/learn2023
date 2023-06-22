#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidEmail(const char *email) {
    int length = strlen(email);
    int atIndex = -1;
    int dotIndex = -1;
    int i;

    
    for (i = 0; i < length; i++) {
        if (email[i] == '@') {
            atIndex = i;
        } else if (email[i] == '.') {
            dotIndex = i;
        }
    }

    
    if (atIndex <= 0 || dotIndex <= atIndex || dotIndex == length - 1) {
        return 0;  // Invalid email format
    }

    
    for (i = 0; i < atIndex; i++) {
        if (!isalnum(email[i]) && email[i] != '.') {
            return 0;  // Invalid username
        }
    }

    
    for (i = atIndex + 1; i < dotIndex; i++) {
        if (!isalpha(email[i]) || isupper(email[i])) {
            return 0;  // Invalid domain name
        }
    }

    
    for (i = dotIndex + 1; i < length; i++) {
        if (!isalpha(email[i]) || isupper(email[i])) {
            return 0;  // Invalid extension
        }
    }

    return 1;  // Valid email format
}

int main() {
    char email[100];

    printf("Enter an email address: ");
    fgets(email, sizeof(email), stdin);

    // Removing the newline character from the input
    email[strcspn(email, "\n")] = '\0';

    if (isValidEmail(email)) {
        printf("Valid email format\n");
    } else {
        printf("Invalid email format\n");
    }

    return 0;
}
