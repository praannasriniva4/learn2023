#include <stdio.h>
#include <stdlib.h>

struct Rectangle {
    int length;
    int width;
};

struct Rectangle* modify_rectangle(struct Rectangle* rect) {
   
    rect->length += 2;
    rect->width += 2;

    return rect;
}

int main() {
   
    struct Rectangle rect = {5, 10};

    struct Rectangle* modified_rect = modify_rectangle(&rect);

    printf("Modified Rectangle:\n");
    printf("Length: %d\n", modified_rect->length);
    printf("Width: %d\n", modified_rect->width);

    return 0;
}
