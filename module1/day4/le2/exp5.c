#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;  
}

int main() {
    int arr[] = {30, 40, 10, 60, 50, 20, 70, 90, 80, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    printf("Enter the key value to search: ");
    scanf("%d", &key);
    
    int result = linearSearch(arr, n, key);
    
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    
    return 0;
}
