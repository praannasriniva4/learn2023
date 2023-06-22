#include <stdio.h>
#include <string.h>

void rotateRight(char *str, int n) {
    int len = strlen(str);
    char temp;

    while (n > 0) {
        temp = str[len - 1];

        for (int i = len - 1; i > 0; i--) {
            str[i] = str[i - 1];
        }

        str[0] = temp;
        n--;
    }
}

void rotateLeft(char *str, int n) {
    int len = strlen(str);
    char temp;

    while (n > 0) {
        temp = str[0];

        for (int i = 0; i < len - 1; i++) {
            str[i] = str[i + 1];
        }

        str[len - 1] = temp;
        n--;
    }
}

int main() {
    char str[] = "abcdxyz";
    int rotations = 3;

    printf("Original string: %s\n", str);

    rotateRight(str, rotations);
    printf("After rotating right %d times: %s\n", rotations, str);

    rotateLeft(str, rotations);
    printf("After rotating left %d times: %s\n", rotations, str);

    return 0;
}
