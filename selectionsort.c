#include <stdio.h>
#define max 50
int arr[max];
void selectionsort(int a[] , int n){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int new = a[i];
                a[i] = a[j];
                a[j]= new;
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
    selectionsort(arr,size);
    display(arr,size);
return 0;
}