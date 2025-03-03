#include <stdio.h>
#define max 50
int arr[max];
void bubblesort(int *a , int n){
    int temp;
    for(int i=0 ; i<n-1;i++){
        for(int j=0; j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
/*void bubblesort(int a[] , int n){
    for(int i=1 ; i<n ; i++){
        for(int j = 1 ; j<= n-i ; j++){
            if(a[j-1]>a[j]){
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
}*/
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
    bubblesort(arr,size);
    display(arr,size);
return 0;
}