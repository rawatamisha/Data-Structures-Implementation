#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head , *temp;
void create(int n){
    head = temp = 0;
    for(int i=0;i<n;i++){
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d" , &newnode->data);
        newnode->next = 0;
        if(i==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void displY(int n){
    temp=head;
    while(temp!=0){
        printf("%d",temp->data);
        temp = temp->next;
        printf("\n");
    }
}
void empty(){
    if(head==NULL){
        printf("empty ll");
    }
}
struct node * getnode(){
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data");
    scanf("%d" , &newnode->data);
    newnode->next=0;
    return newnode;
}
void insert_beg(){

}
int main(){
    int n;
    printf("enter no, of nodes :");
    scanf("%d" , &n);
    create(n);

}