#include <stdio.h>
#define max 50
int arr[max];
void create_array(int n){
    arr[n];
    for(int i=0;i<n;i++){
        printf("enter element %d : ",i);
        scanf("%d" , &arr[i]);
    }
}
void swap(int *x ,  int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void display(int n){
    for(int i=0;i<n;i++){
        printf("%d\t" , arr[i]);
    }
    printf("\n");
}
void maxheapify(int arr[] , int n, int i){
    int largest = i;
    int l = 2*i+1;
    int r = 2*i+2;
    if(l<n && arr[l]>arr[largest]){
        largest = l;
    }
    if(r<n && arr[r]>arr[largest]){
        largest = r;
    }
    if(largest!=i){
        swap(&arr[largest] , &arr[i]);
        maxheapify(arr , n , largest);
    }
}
void buildmaxheap(int arr[] , int n){
    for(int i=n/2 -1 ; i>=0;i--){
        maxheapify(arr , n , i);
    }
}
void heapsort(int arr[],int n){
    buildmaxheap(arr,n);
    for(int i=n-1;i>0;i--){
        swap(&arr[i],&arr[0]);
        maxheapify(arr,i,0);
    }
}
int main(){
    int n;
    printf("enter size of array : ");
    scanf("%d" , &n);
    create_array(n);
    printf("before sorting: \n");
    display(n);
    heapsort(arr,n);
    printf("after sorting: \n");
    display(n);
}