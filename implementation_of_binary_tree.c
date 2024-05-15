//binary tree traversal;
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node treenode;
treenode* createnewnode(int val){
   treenode* node= (treenode*)malloc(sizeof(treenode));
	node->data=val;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void preorder(treenode *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(treenode *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void postorder(treenode *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
void levelorder( struct node *root) {
       struct node* q[500];
       int front =0;
       int rear=0;
       q[rear]=root;
       rear++;
       while(front !=rear){
           struct node *dn=q[front];
           printf("%d ",q[front]->data);
            if(dn->left!=NULL){
               q[rear]=dn->left;
               rear++;
            }
            if(dn->right!=NULL){
                q[rear]=dn->right;
                rear++;
            }
            front++;
            free(dn);
       }
       
}
int main() {
	treenode *node1=createnewnode(10);
	treenode *node2=createnewnode(20);
    treenode *node3=createnewnode(30);
    treenode *node4=createnewnode(40);
    treenode *node5=createnewnode(50);
    treenode *node6=createnewnode(60);
    treenode *node7=createnewnode(70);
    node1->left=node2;
    node1->right=node3;
    
    node2->left=node4;
    node2->right=node5;
    
    node3->left=node6;
    node3->right=node7;
    
    treenode *root=node1;
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");
    postorder(root);
    printf("\n");
    levelorder(root);
    
}