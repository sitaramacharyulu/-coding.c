//polynomial representation using linked list
#include <stdio.h>
#include<stdlib.h>
struct Node{
    float coeff;
    int expo;
    struct node *next;
};
typedef struct Node node;
node *insert_term(node *head ,float c,int e){
    node *newnode=(node *)malloc(sizeof(node));
    newnode->coeff=c;
    newnode->expo=e;
    newnode->next=NULL;
    
    if(head==NULL){
        head=newnode;
        
    }
    else{
        node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return head;
    
}
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        printf("(%.2f)x^%d%c",temp->coeff,temp->expo,(temp->next==NULL)?'\n' : '+');
        temp=temp->next;
    }
}
node* create_polynomial(){//if we call this function the head will represent head *node
    node *head=NULL;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        float co;
        int  ex;
        scanf("%f %d",&co,&ex);
       head= insert_term(head,co,ex);
    }
    return head;
}
int main() {
    node *poly=create_polynomial();
    display(poly);
    return 0;

}