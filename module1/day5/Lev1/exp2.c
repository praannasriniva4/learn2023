#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[] = {'5', '2', '7', '8', '\0'};
    int num = atoi(str);

    printf("Input String: %s\n", str);
    printf("Output Integer: %d\n", num);

    return 0;
}
