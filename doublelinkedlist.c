#include <stdio.h>
#include <stdlib.h>
struct dnode{
    int data;
    struct dnode *prev;
    struct dnode *next;
};
struct dnode *head=NULL , *tail=NULL , *temp=NULL , *newnode=NULL ;

struct dnode *getnode(){
    struct dnode *newnode;
    newnode = (struct dnode*)malloc(sizeof(struct dnode));
    printf("enter data : ");
    scanf("%d" , &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void create_list(int n){
    head = tail;
    for(int i=1 ; i<=n ; i++){
        newnode = getnode();
        if(i==1){
            head = tail = newnode;
        }
        else{
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }
}
int empty_list(){
    if(head==NULL){
        printf("empty list");
    }
    return 0;
}
void display(){
    printf("linked list is: \n");
    temp = head ;
    empty_list();
    while(temp!=0){
        printf("%d\t" , temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int insertion_atbeg(int n){
    newnode = getnode();
    if(head==NULL){
        head = tail = newnode;
    }
    else{
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
    }
    display();
    return ++n;
}
int insertion_atend(int n){
    newnode = getnode();
    if(head==NULL){
        head = tail = newnode;
    }
    else{
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
    display();
    return ++n;
}
int insertion_atpos(int n){
    temp = head ;
    empty_list();
    int pos , i=1 ;
    printf("enter position at which you want to insert : ");
    scanf("%d" , &pos);
    if((pos<=0 || pos>n+1) || (pos!=1 && head==NULL)){
        printf("invalid position");
        return n;
    } 
    else{
        newnode = getnode();
         while(i<pos){
            temp = temp->next;
            i++;
        }
        newnode->next = temp;
        newnode->prev = temp->prev;
        temp->prev->next=newnode;
        temp->prev=newnode;
    }
    display();
    return ++n;
}
int deletion_atbeg(int n){
    empty_list();
    temp = head;
    head = temp->next;
    temp->next->prev = NULL;
    free(temp);
    temp==NULL;
    display();
    return --n;
}
int deletion_atend(int n){
    empty_list();
    temp = head;
    while(temp->next!=0){
        temp = temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    temp==NULL;
    display();
    return --n;
}
int deletion_atpos(int n){
    empty_list();
    int pos , i=1 ;
    printf("enter position at which you want to insert : ");
    scanf("%d" , &pos);
    if((pos<=0 || pos>n+1) || (pos!=1 && head==NULL)){
        printf("invalid position");
        return n;
    } 
    else{
    temp = head;
    while(i<pos){
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
    temp==NULL;
    }
     display();
    return --n;
}

int main(){
    int n ; 
    printf("enter no. node nodes:");
    scanf("%d" , &n);
    create_list(n);
    display();
    printf("insertion at beg: \n");
    insertion_atbeg(n);
    printf("insertion at end: \n");
    insertion_atend(n);
    printf("insertion at pos: \n");
    insertion_atpos(n);
    printf("deletion at beg: \n");
    deletion_atbeg(n);
    printf("deletion at end: \n");
    deletion_atend(n);
    printf("deletion at pos: \n");
    deletion_atpos(n);
    return 0;
}