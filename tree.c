#include <stdio.h>
#include <stdlib.h>
struct t_node{
    struct t_node *left;
    int data;
    struct t_node *right;
};
struct t_node *root = NULL;
struct t_node *create_bintree(){
    struct t_node *newnode;
    int x;
    newnode = (struct t_node*)malloc(sizeof(struct t_node));
    printf("enter the data :");
    scanf("%d" , &x);
    printf("\n");
    if(x==-1){
        return 0;
    }
    newnode->data = x;
    printf("enter the left child of %d :\n ", x);
    newnode->left = create_bintree();
    printf("enter the right child of %d :\n " , x);
    newnode->right = create_bintree();
    return newnode;
}
void preorder(struct t_node *root){
    if(root==NULL){
        return ;
    }
    else{
        printf("%d\t" , root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct t_node *root){
    if(root==NULL){
        return ;
    }
    else{
        postorder(root->left);
        postorder(root->right);
        printf("%d\t" , root->data);
    }
}
void inorder(struct t_node *root){
    if(root==NULL){
        return ;
    }
    else{
        inorder(root->left);
        printf("%d\t" , root->data);
        inorder(root->right);
    }
}
int main(){
    root = create_bintree();
    printf("inorder traversal : ");
    inorder(root);
    printf("\n");
    printf("preorder traversal : ");
    preorder(root);
    printf("\n");
    printf("postorder traversal : ");
    postorder(root);
    printf("\n");
}