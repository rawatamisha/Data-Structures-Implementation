#include <stdio.h>

int main() {
 int n, i;
 
 printf("Select size of the array A : ");
 scanf("%d", &n);
 
 int arr[n];
 for ( i=0; i<n; i++){
  printf("enter element %d : " , i);
  scanf("%d" , &arr[i]);
 }
 int largest = arr[0];
 for ( i=0; i<n; i++){
  if ( arr[i] > largest){
    largest = arr[i];
  }
 }
 int smallest = arr[0];
 for ( i=0; i<n; i++){
  if ( arr[i] < smallest){
    smallest = arr[i];
  }
 }

 int diff = largest - smallest;

 printf("Difference between the largest and smallest values is : %d", diff);

 return 0;
}
