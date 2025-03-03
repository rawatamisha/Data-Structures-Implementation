#include <stdio.h>
int main(){
    #define max 50
    int arr[max] , pos , size , num , i ;
    printf("enter size of array : ");
    scanf("%d" , &size);
    for ( i=0 ; i<size ; i++){
        printf("enter element %d of array : " , i+1);
        scanf("%d" , &arr[i]);
    }
    printf("enter position of element to be deleted : ");
    scanf("%d" , &pos);
    if ( pos<=0 || pos>size){
        printf("invalid position");
    }
    else{
        num = arr[pos-1];
        for( i=pos ; i<=size ; i++){
            arr[i-1] = arr[i];
        }
        size--;
        printf("element deleted is : " , num);
        printf("array is : ");
        for(i=0 ; i<size; i++){
            printf("%d\t" , arr[i]);
        }
    }
    return 0;
}
