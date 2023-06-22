#include <stdio.h>
#include <string.h>

void sortNames(char *names[], int length) {
    int i, j;
    char *temp;

    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int length = sizeof(names) / sizeof(names[0]);

    sortNames(names, length);

    printf("Names in alphabetical order:\n");
    for (int i = 0; i < length; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
