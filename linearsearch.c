#include <stdio.h>
#define max 50
int arr[max];
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int size , key;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("enter element you want to find :");
    scanf("%d" , &key);
    int result = linearSearch(arr, size, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}