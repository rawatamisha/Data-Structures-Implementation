#include <stdio.h>
#define max 50
int arr[max];
void insertionsort(int a[] , int n){
    for(int i=0 ; i<n-1 ; i++){
       int temp = a[i+1];
       for(int j=i ; j>=0 ; j--){
        if(a[j]>temp){
            int new = a[j+1];
            a[j+1] = a[j];
            a[j] = new;
        }
        else{
            break;
        }
       }

    }
}
void display(int *a , int n){
    for(int i=0 ; i<n;i++){
        printf("%d\t" , a[i]);
    }
}
int main(){
    int size;
    printf("enter size of array :");
    scanf("%d" , &size);
    int arr[size];
    for(int i=0; i<size ; i++){
        printf("enter element %d : " , i);
        scanf("%d" , &arr[i]);
    }
    insertionsort(arr,size);
    display(arr,size);
return 0;
}