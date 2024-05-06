#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next; 
};
typedef struct node Node;
 Node *head= NULL;
 int top=-1;
 int size;
void stack_push(int val){
    if(top==size-1){
        printf("stack is full");
    }
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
    top++;
}

void stack_pop(){
    if(head == NULL){
        printf(" stack empty\n");
    }
        Node *temp = head;
        head = head->next;
        free(temp);
        top--;
    
}
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
    scanf("%d",&size);//to know size and we use global variable
    int ch;
    while(1){
       
        scanf("%d",&ch);
        if(ch == 1){
            int val; 
            scanf("%d",&val);
            stack_push(val);
        }
        else if(ch == 2){
            display();
        }
        else if(ch == 3){
            stack_pop();
        }
        
        else {
            printf("Thank you for the testing. ADIEU!!\n");
            break;
        }
    }
}