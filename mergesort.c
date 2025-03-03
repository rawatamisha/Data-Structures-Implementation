#include <stdio.h>
#define max 50
void merge(int a[], int i, int j, int mid) {
    int B[j - i + 1]; 
    int m = 0;
    int k = mid + 1;
    int start = i;
    while (i <= mid && k <= j) {
        if (a[i] < a[k]) {
            B[m] = a[i];
            i++;
        } 
        else {
            B[m] = a[k];
            k++;
        }
        m++;
    }
    while (i <= mid) {
        B[m] = a[i];
        i++; m++;
    }
    while (k <= j) {
        B[m] = a[k];
        k++; m++;
    }
    for (int n = 0; n < m; n++) {
        a[start + n] = B[n];
    }
}
void mergesort(int a[], int i, int j) {
    if (i < j) {
        int mid = (i + j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid + 1, j);
        merge(a, i, j, mid);
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];  
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    mergesort(arr, 0, size - 1);  
    display(arr, size); 
    return 0;
}
