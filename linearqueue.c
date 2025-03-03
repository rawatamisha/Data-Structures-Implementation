#include <stdio.h>
#include <stdlib.h>
#define max 7
int choice;
int queue[max];
int front = -1 , rear = -1 ;
void enqueue(){
    int element ; 
    printf("enter value u want to add : ");
    scanf("%d" , &element);
    if (rear == max-1){
        printf("queue is full\n");
    }
    else if ( front == rear == -1){
        front = rear = 0;
        queue[rear] = element;
    }
    else{
        rear++;
        queue[rear] = element;
    }
}
void dequeue(){
    if ( front == -1 && rear == -1){
        printf("empty queue\n");
    }
    else if(front == rear){
        printf("deleting element %d\n" , queue[front]);
        front = rear = -1;
    }
    else{
        printf("deleting element %d\n" , queue[front]);
        front++;
    }
}
void peek(){
    if (front==-1 && rear==-1){
        printf("empty queue\n");
    }
    else{
        front = 0;
        printf(" value of front is %d\n" , queue[front]);
    }
}
void display(){
    int i;
    if(front == -1 && rear == -1){
        printf("empty queue\n");
    }
    else{
        for(i=front ; i<=rear ; i++){
            printf("%d \t" , queue[i]);
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
