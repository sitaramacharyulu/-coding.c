#include<stdio.h>
#include<stdlib.h>
//self-referntial structure
struct node{
    int data;
    struct node *next; //pointer to node
};
//alias name
typedef struct node Node;
//head as global variable
Node *head = NULL;
//insertion at head
void insert_at_head(int val){
    //creating a newNode
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL){
         head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}
//insertion at tail
void insert_at_tail(int val){
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else {
        Node *temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        
    }
}
//delete at head
void delete_at_head(){
    if(head == NULL){
        printf("no nodes to be deleted\n");
    }
    else {
        Node *temp = head;
        head = head->next;
        free(temp);
    }
}
//delete at tail
void delete_at_tail(){
    if(head == NULL){//list containing one node
        printf("no nodes to be deleted\n");
    }
    else if(head->next == NULL){//list containing one node
        Node *delNode=head;
        head=NULL:
        free(delNode);
        
    }
    else {
        Node *temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        
        }
       Node *delNode=temp->next;
       temp->next=NULL;
    }
}
//to display linked list
void display(){
    if(head == NULL){
        printf("No nodes to display\n");
    }
   
    else {
        Node *temp = head;
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main (){
    int ch;
    //infinte loop
    while(1){
       
        scanf("%d",&ch);
        if(ch == 1){
            //implement insert at head
            int val; //value for the node to be inserted
            scanf("%d",&val);
            insert_at_head(val);
        }
        else if(ch == 2){
            //implement insert at tail
            int val;
            scanf("%d",&val);
            insert_at_tail(val);
        }
        else if(ch == 3){
            //implement Display
            display();
        }
        else if(ch == 4){
            //implement delete at head
            delete_at_head();
        }
        else if(ch == 5){
            //implement delete at tail
            delete_at_tail();
        }
        else {
            printf("Thank you for the testing. ADIEU!!\n");
            break;
        }
    }
}