#include <stdio.h>
#include <stdlib.h>
struct cnode{
    int data;
    struct cnode * next;
};
struct cnode * head=NULL , *temp=NULL;
struct cnode * getnode(){
    struct cnode * newnode;
    newnode = (struct cnode *)malloc(sizeof(struct cnode));
    printf("enter data:");
    scanf("%d" , &newnode->data);
    newnode->next=NULL;
}
void create(int n){
    struct cnode * newnode;
    temp = head;
    for(int i=0;i<n;i++){
        newnode= getnode();
        if(i==0){
            head = temp= newnode;
            newnode->next = head;
        }
        else{
            temp->next = newnode;
            newnode->next=head;
            temp=newnode;
        }
    }
}
void displaysingle(){
    if(head==NULL){
        printf("empty list");
    }
    else{
        temp = head;
        while(temp->next!=head){
            printf("%d\t" , temp->data);
            temp=temp->next;
        }
        printf("%d" , temp->data);
    }
}
int main(){
    int n;
    printf("enter no of nodes:");
    scanf("%d" , &n);
    create(n);
    displaysingle();
}