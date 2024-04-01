// doubly linked list
#include <stdio.h>
struct node{
    int data;
    struct node *next;
    struct node *pre;
};
typedef struct node node;
node *head=NULL;
node *tail=NULL;
insert_at_head(int val){
    node *newnode=(node *)malloc(sizeof(node));
    newnode->data=val;
    newnode->next=NULL;
    newnode->pre=NULL;
    if(head==NULL && tail==NULL){
       head=newnode;
       tail=newnode;
    }
    else{
        newnode->next=head;
        head->pre=newnode;
        head=newnode;
    }
    
}
void insert_at_tail(int val){
    node *newnode=(node*)malloc(sizeof(node));
    newnode->data=val;
    newnode->pre=NULL;
    newnode->next=NULL;
    if(head==NULL && tail==NULL){
      head=newnode;
      tail=newnode;
    }
    else{
        newnode->pre=tail;
        tail->next=newnode;
        tail=tail->next;
    }
}
 void delete_at_head(){
     if(head==NULL && tail==NULL){
        printf("no nodes");
     }
     else if(head==tail){
        node *temp=head;
        head=NULL;
        tail=NULL;
         
     }
     else{
        node *temp=head;
        head=head->next;
        tail=tail->pre;
        free(temp);
     }
 }
 void delete_at_tail(){
     if(head==NULL && tail==NULL){
         printf("no nodes");
     }
     else if(head==tail){
         node *temp=head;
         head=NULL;
         tail=NULL;
     }
     else{
         node *temp=tail;
         temp->next=tail->pre;
         temp->next=NULL;
         tail=tail->pre;
         free(temp);
     }
 }
void display_forward(){
    if(head==NULL && tail==NULL){
        printf("no nodes to display");
    }
    else{
        node *temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void display_backward(){
    if(head==NULL && tail==NULL){
        printf("no nodes to display\n");
    }
    else{
        node *temp=tail;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->pre;
        }
        printf("\n");
    }
}

int main() {
    int ch;
    while(1){
        scanf("%d ",&ch);
        if(ch==1){
            int val;
            scanf("%d ",&val);
            insert_at_head(val);
        }
        else if(ch==2){
            int val;
            scanf("%d ",&val);
            insert_at_tail( val);
        }
        else if(ch==3){
            delete_at_head();
        }
        else if(ch==4){
            delete_at_tail();
        }
        else if(ch==5){
            display_forward();
        }
        else if(ch==6){
            display_backward();
        }
        else{
            printf("Thank you");
            break;
        }
    }

}