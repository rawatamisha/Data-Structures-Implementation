#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node * head=NULL , * temp=NULL;
struct node * getnode(){
    struct node * newnode;
    int data;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d" , &data);
    newnode->data = data;
    newnode->next=NULL;
    return newnode;
}
void create(int n){
    struct node * newnode;
    for(int i=0;i<n;i++){
        newnode = getnode();
        if(i==0){
            head = temp = newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void display(){
    temp = head;
    while(temp!=0){
        printf("%d\t" , temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void reverse(){
    struct node *prevnode = NULL , *currentnode = NULL , *nextnode = NULL;
    currentnode = nextnode = head;
    while(nextnode!=NULL){
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}
int main(){
     int n;
    printf("enter no of nodes:");
    scanf("%d" , &n);
    create(n);
    display();
    reverse();
    display();
}