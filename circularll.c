#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head , *temp;
void create_singly(int n){
    head = temp = NULL;
    for(int i=1;i<=n;i++){
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter data : ");
        scanf("%d" , &newnode->data);
        newnode->next = NULL;
        if(i==1){
            head=temp=newnode;
            newnode->next = head;
        }
        else{
            temp->next=newnode;
            newnode->next = head;
            temp=newnode;
        }
    }
}

void display_singly(int n){
    if(head==NULL){
        printf("empty list");
        return ;
    }
    else{
    temp=head;
    while(temp->next!=head){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    printf("%d\n" , temp->data);
    }
}
struct dnode {
    int data;
    struct dnode *prev;
    struct dnode *next;
};
struct dnode *dhead , *dtail , *dtemp ;
void create_doubly(int n){
    dhead = dtemp = NULL;
    for(int i=1;i<=n;i++){
        struct dnode *newnode;
        newnode = (struct dnode *)malloc(sizeof(struct dnode));
        printf("enter data : ");
        scanf("%d" , &newnode->data);
        newnode->next = NULL;
        newnode->prev = NULL;
        if(i==1){
            dhead=dtemp=newnode;
            newnode->next = dhead;
            newnode->prev = dhead;
        }
        else{
            dtemp->next=newnode;
            newnode->prev = dtemp;
            newnode->next = dhead;
            dhead->prev = newnode;
            dtemp=newnode;

        }
    }
}
void display_doubly(int n){
    if(dhead==NULL){
        printf("empty list");
        return ;
    }
    else{
    dtemp=dhead;
    while(dtemp->next!=dhead){
        printf("%d\t",dtemp->data);
        dtemp = dtemp->next;
    }
    printf("%d\n" , dtemp->data);
    }
}
int main(){
    int n1 , n2;
    printf("enter number of nodes for singly circular linked list :");
    scanf("%d" , &n1);
    create_singly(n1);
    display_singly(n1);
    printf("enter number of nodes for doubly circular linked list :");
    scanf("%d" , &n2);
    create_doubly(n2);
    display_doubly(n2);
}
