#include <stdio.h>
int main(){
    int r1 , c1 , r2 , c2 ,  i , j , k;
    printf("enter no. of rows of first matrix : ");
    scanf("%d" , &r1);
    printf("enter no. of columns of first matrix : ");
    scanf("%d" , &c1);
    int arr1[r1][c1];
    for ( i=0 ; i<r1 ; i++){
        for ( j=0 ; j<c1 ; j++ ){
            printf("enter element [%d][%d] : " , i , j);
            scanf("%d" , &arr1[i][j]);
        }
    }
    for ( i=0 ; i<r1 ; i++){
        for ( j=0 ; j<c1 ; j++ ){
            printf("%d \t" , arr1[i][j]);
        }
    printf("\n");
    }
     printf("enter no. of rows of second matrix : ");
    scanf("%d" , &r2);
    printf("enter no. of columns of second matrix : ");
    scanf("%d" , &c2);
    int arr2[r2][c2];
    for ( i=0 ; i<r2 ; i++){
        for ( j=0 ; j<c2 ; j++ ){
            printf("enter element [%d][%d] : " , i , j);
            scanf("%d" , &arr2[i][j]);
        }
    }
     for ( i=0 ; i<r2 ; i++){
        for ( j=0 ; j<c2 ; j++ ){
            printf("%d \t" , arr2[i][j]);
        }
    printf("\n");
    }
    int mult[r1][c2] ;
     for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            mult[i][j] = 0;
        }
    }

    for ( i=0 ; i<r1 ; i++){
        for ( j=0 ; j<c2 ; j++){
            for ( k=0 ; k<c1 ; k++){
                mult[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printf("multiplication of arr1 and arr2 :\n ");
    for ( i=0 ; i<r1 ; i++){
        for ( j=0 ; j<c2 ; j++ ){
            printf("%d \t" , mult[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
    
