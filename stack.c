#include <stdio.h>
#include <stdlib.h>
#define n 50
int stack[n];
int choice ;
int TOS = -1;

void Push(){
    int data;
    printf("enter the value u want to push \n");
    scanf("%d" , &data);
    if(TOS==n-1){
        printf("stack is full\n");
    }
    else{
        TOS++;
        stack[TOS] = data;
    }
}
void Pop(){
    int item ;
    if(TOS==-1){
        printf("stack underflow\n");
    }
    else{
        item = stack[TOS];
        TOS--;
        printf("popped item is %d\n" , item);
    }
}
void Peek(){
    int data;
    if(TOS==-1){
        printf("stack is empty\n");
    }
    else{
        data = stack[TOS];
        printf("topmost element is %d \n" , data);
    }
}
void Display(){
    int i;
    if(TOS==-1){
        printf("stack is empty\n");
    }
    else{
        i=TOS;
        printf("stack is : \n");
        while(i>=0){
            printf("%d\n" , stack[i]);
            i--;
        }
    }
}
int userchoice(){
    printf("enter \n 1: push\n 2: pop \n 3: peek \n 4: display \n 0: exit \n");
    scanf("%d" , &choice);
    while(choice!=0){
    switch (choice){
        case 1 :
            Push();
            break;
        case 2 :
        Pop();
        break;
        case 3 :
        Peek();
        break;
        case 4:
        Display();
    }
    userchoice();
    }
}
int main(){
   userchoice();
   }
