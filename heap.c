#include <stdio.h>
#include <math.h>
#define max 50
int arr[max];
void swap(int *x ,  int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void create_array(int n){
    arr[n];
    for(int i=0;i<n;i++){
        printf("enter element %d : ",i);
        scanf("%d" , &arr[i]);
    }
}
void insert_heap(int *arr , int n,int value){
    n = n+1;
    arr[n] = value;
    int i=n;
    while(i>=1){
        int parent = floor(i/2);
        if(arr[parent]<arr[i]){
            swap(&arr[parent] ,&arr[i]);
            i=parent;
        }
        else{
            return;
        }
    }
}
void display(int n){
    for(int i=0;i<n;i++){
        printf("%d\t" , arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("enter size of array : ");
    scanf("%d" , &n);
    create_array(n);
    insert_heap(arr,n,100);
    display(n);
}