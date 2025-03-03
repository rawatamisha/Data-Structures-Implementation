#include <stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
int count = 0 , choice;
struct node *TOS = 0;
void push(){
    int value;
    printf("enter the value u want to push \n");
    scanf("%d" , &value);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->link = TOS;
    TOS = newnode;
    count ++;
}
void pop(){
    struct node *temp;
    if(TOS==NULL){
        printf("stack is empty");
    }
    else{
        temp = TOS;
        printf("Deleted element : %d\n" , temp->data);
        TOS = TOS->link;
        free(temp);
        temp=NULL;
        count--;
    }
}
void peek(){
    if(TOS==NULL){
        printf("stak is empty");
    }
    else{
        printf("topmost element is %d\n" ,TOS->data);
    }
}
void display(){
    struct node *temp;
    if(TOS==NULL){
        printf("stack is empty");
    }
    else{
        temp = TOS;
        printf("stack \n");
        while(temp!=NULL){
            printf("%d\n" , temp->data);
            temp=temp->link;
        }
    }
}
int userchoice(){
    printf("enter \n 1: push\n 2: pop \n 3: peek \n 4: display \n 0: exit \n");
    scanf("%d" , &choice);
    while(choice!=0){
    switch (choice){
        case 1 :
            push();
            break;
        case 2 :
            pop();
            break;
        case 3 :
            peek();
            break;
        case 4:
            display();
    }
    userchoice();
    }
}
int main(){
   userchoice();
   }
