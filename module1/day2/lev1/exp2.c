//program to swap any type of data passed to an function.
#include <stdio.h>

void swap(void* ptr1, void* ptr2, size_t size) {
    char temp[size];

    // Copy data from ptr1 to temp
    char* charPtr1 = (char*)ptr1;
    char* charPtr2 = (char*)ptr2;
    for (size_t i = 0; i < size; ++i) {
        temp[i] = charPtr1[i];
    }

    // Copy data from ptr2 to ptr1
    for (size_t i = 0; i < size; ++i) {
        charPtr1[i] = charPtr2[i];
    }

    // Copy data from temp to ptr2
    for (size_t i = 0; i < size; ++i) {
        charPtr2[i] = temp[i];
    }
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    double x,y;
    scanf("%lf %lf",&x,&y);
    printf("Before swap: x = %lf, y = %lf\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %lf, y = %lf\n", x, y);

    return 0;
}