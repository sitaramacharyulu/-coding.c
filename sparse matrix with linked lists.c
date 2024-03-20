
//sparse matrix repersentation using linked list
#include <stdio.h>
#include<stdlib.h>
struct node{
    int row,col,data;
    struct node *next;
};
//aligna
typedef struct node Node;
Node *head=NULL;
void insert_at_tail(int r,int c,int val){
    //crate a new Node
    Node *newnode=(Node*)malloc(sizeof(Node));
    newnode->row=r;
    newnode->col=c;
    newnode->data=val;
    newnode->next=NULL;
    
    if(head==NULL){
        head=newnode;
        
    }
    else{
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    
}
void display(){
    printf("Non_zero elements of the given spare matrix are: \n");
    printf("r\tc\tval\n");
    Node *temp=head;
    while(temp!=NULL){
        printf("%d\t%d\t%d\n",temp->row,temp->col,temp->data);
        temp=temp->next;
    }
}
int main() {
    int r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(mat[i][j]!=0){
                insert_at_tail(i,j,mat[i][j]);
            }
        }
    }
    display();
	
}