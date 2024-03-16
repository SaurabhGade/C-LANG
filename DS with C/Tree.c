#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * left;
    struct node * right;
};
struct  node * getNode(){
   struct node * root = (struct node *)malloc(sizeof(struct node));
   root->left = NULL;
   root->right = NULL;
    return root;
}
void inorderTraversal(struct node * root){
    if(root){
        inorderTraversal(root->left);
        printf("%d",root->data);
        inorderTraversal(root->right);
    }
}
int main()
{
    struct node * root = getNode();
    root->data = 10;
    root->left = getNode(); root->left->data = 8;
    root->right = getNode(); root->right->data = 20;
    inorderTraversal(root);
    return 0;
}