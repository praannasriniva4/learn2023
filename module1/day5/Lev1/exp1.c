#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);
        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }
}

int main() {
    char str1[] = {'A', 'b', 'c', 'd', ' ', 'X', 'Y', 'Z', '\0'};
    char str2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
    char str3[] = {'A', '+', 'B', '\0'};
    char str4[] = {'P', 'r', 'o', 'g', '4', 'u', '\0'};

    toggleCase(str1);
    toggleCase(str2);
    toggleCase(str3);
    toggleCase(str4);

    printf("Input String: %s\n", str1);
    printf("Output String: %s\n", str1);
    printf("Input String: %s\n", str2);
    printf("Output String: %s\n", str2);
    printf("Input String: %s\n", str3);
    printf("Output String: %s\n", str3);
    printf("Input String: %s\n", str4);
    printf("Output String: %s\n", str4);

    return 0;
}
