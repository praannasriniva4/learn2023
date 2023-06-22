#include <stdio.h>

int compareBoxes(int boxA[], int boxB[], int length) {
    int i, j, found;

    for (i = 0; i < length; i++) {
        found = 0;
        for (j = 0; j < length; j++) {
            if (boxA[i] == boxB[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int boxA[] = {200, 10, -90};
    int boxB[] = {-90, 200, 10};
    int length = sizeof(boxA) / sizeof(boxA[0]);

    int result = compareBoxes(boxA, boxB, length);

    if (result) {
        printf("The boxes have a one-to-one mapping of items.\n");
    } else {
        printf("The boxes do not have a one-to-one mapping of items.\n");
    }

    return 0;
}
