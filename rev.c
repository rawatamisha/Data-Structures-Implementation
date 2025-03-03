#include <stdio.h>
#include <string.h>
#define n 100
char stack[n];
int TOS = -1;
void Push( char x){
    if(TOS==n-1){
        printf("stack is full\n");
    }
    else{
        TOS++;
        stack[TOS] = x ;
    }
}
void Pop(){
    char data ;
    if(TOS==-1){
        printf("stack underflow\n");
    }
    else{
        data = stack[TOS];
        TOS--;
        printf("%c" , data);
    }
}
int main(){
    char str[n] ;
    int i , length;
    printf("enter a string or sentence \n");
    scanf("%[^\n]s" , &str);
    length = strlen(str);
    for (i=0 ; i<length ; i++){
        Push(str[i]);
    }
    printf("reversed string is:\t");
    while(TOS!=-1){
        Pop();
    }
    return 0;
}