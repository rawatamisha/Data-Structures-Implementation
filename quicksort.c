#include <stdio.h>
#define max 50
int arr[max];
void swap(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
}
int partition(int arr[], int p, int q) {
    int pivot = arr[p];
    int i = p;
    for (int j = p+1; j <=q; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i],&arr[p]);
    return i;
}
void quickSort(int arr[], int p, int q) {
    if(p>q){
        return ;
    }
    else{
        int m = partition(arr, p, q);
        quickSort(arr,p, m-1);
        quickSort(arr, m+1, q);
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    quickSort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}