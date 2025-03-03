#include <stdio.h>
#include <stdlib.h>
int choice;
struct node{
    int data;
    struct node *next;
};
struct node *front = NULL , *rear = NULL;
int count = 0;
void enqueue(){
    int element ; 
    printf("enter value u want to add : ");
    scanf("%d" , &element);
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = element;
    newnode->next = NULL;
    if(front==NULL && rear==NULL){
        front = rear = newnode;
        count++;
    }
    else{
        rear->next = newnode;
        rear = newnode;
        count++;
    }
}
void dequeue(){
    struct node *temp;
    temp = front;
    if ( front == NULL && rear == NULL){
        printf("empty queue\n");
    }
    else{
        front=front->next;
        printf("deleting element %d\n" , temp->data);
        free(temp);
        temp = NULL;
        count--;
    }
}
void peek(){
    if (front==NULL && rear==NULL){
        printf("empty queue\n");
    }
    else{
        printf(" value of front is %d\n" , front->data);
    }
}
void display(){
    struct node *temp;
    if(front == NULL && rear == NULL){
        printf("empty queue\n");
    }
    else{
       temp = front;
       while(temp!=NULL){
        printf("%d\t" , temp->data);
        temp = temp->next;
       }
    }
    printf("\n");
}
void userchoice(){
    printf(" enter 1-enqueue  2-dequeue  3-peek  4-display  0-exit\n");
    scanf("%d" , &choice);
    while(choice!=0){
        switch (choice){
            case 1 :
                enqueue();
                break;
            case 2 :
                dequeue();
                break;
            case 3 :
                peek();
                break;
            case 4:
                display();
                break;
        }
        userchoice();
    }
}
int main(){
    userchoice();
}
