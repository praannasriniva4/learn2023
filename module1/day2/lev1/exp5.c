// Function to count the number of set bits
#include<stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;  
        num >>= 1;        
    }
    return count;
}


int totalSetBits(unsigned int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}

int main() {
    unsigned int a[3] = {0x1, 0xF4, 0x10001};
    int totalBits = totalSetBits(a, 3);

    printf("The total number of set bits in the given array is %d\n", totalBits);

    return 0;
}