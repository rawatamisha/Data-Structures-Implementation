#include <stdio.h>
#define max 50
int arr[max];
int binarySearch(int arr[], int i,int j, int key) {
    if(i==j){
        if(arr[i]==key){
            return(i);
        }
        else{
            return (-1);
        }
    }
    else{
        int mid = (i+j)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key<arr[mid]){
            return binarySearch(arr , i , mid-1 , key);
        }
        else{
            return binarySearch(arr , mid+1 , j , key);
        }
    }
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
    int result = binarySearch(arr, 0 , size-1, key);
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}