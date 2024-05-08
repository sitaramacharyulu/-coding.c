#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node* front=0;
node *rear=0;
int size=0;
void enqueue(int val){
    node *newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    newnode->data=val;
    if(rear==NULL && front==NULL){
        front=newnode;
        rear=newnode;
        size++;
        
    }
    else{
     rear->next=newnode;
      size++;
     rear=newnode;
    
}
}
void dequeue(){
    if(size==0){
        printf("queue is empty\n");
        return;
    }
    else if(size==1){
         node *delnode=front;
        printf("%d is removed\n",delnode->data);
        front=front->next;
        free(delnode);
        rear=NULL;
        size--;
    }
    else{
        node *delnode=front;
        printf("%d is removed\n",delnode->data);
        front=front->next;
         free(delnode);
         size--;
    }
}
void display(){
    if(size==0){
        printf("queue is empty\n");
    }
    else{
        node *temp=front;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void get_size(){
    printf("%d size\n",size);
}
void get_rear(){
    if(size==0){
        printf("queue is empty\n");
        return;
    }
    printf("\n%d rear element",rear->data);
}
void get_front(){
    if(front==NULL){
        printf("queue is empty\n");
        return;
    }
    printf("\n%d front element",front->data);
}

int main() {
   int ch;
   while(1){
       scanf("%d",&ch);
        if(ch==1){
            int val;
            scanf("%d",&val);
            enqueue( val);
        }
        else if(ch==2){
            dequeue();
        }
       else if(ch==3){
            get_size();
        }
        else if(ch==4){
            get_front();
        }
        else if(ch==5){
            get_rear();
        }
        else if(ch==6){
            display();
        }
        else{
            break;
        }
   }
}