#include <stdio.h>
int main(){
    #define max 50
    int arr[max];
    int size , i , pos , num;
    printf("enter the size of array : ");
    scanf("%d" , &size);
    for( i=0 ; i<size ; i++){
        printf("enter element %d of array : " , i);
        scanf("%d" , &arr[i]);
    }
    printf("enter position in which u want to insert : ");
    scanf("%d" , &pos);
    printf("enter the no. u want to insert : ");
    scanf("%d" , &num);
    if (pos <= 0 || pos>size+1){
        printf("invalid position");
    }
    else{
        for( i=size-1; i>=pos-1 ; i--){
            arr[i+1] = arr[i];
        }
        arr[pos-1] = num;
    }
    size++;
    printf("array : ");
    for( i=0 ; i<size ; i++){
        
        printf("%d\t" , arr[i]);
    } 
    return 0;
}