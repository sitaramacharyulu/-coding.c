//circular linked list;;
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node *head=NULL;
void insert_at_head(int val){
  node  *newNode =(node*)malloc(sizeof( node));
  newNode->data=val;
  newNode->next=newNode;
   if(head == NULL)    
        {    
            head = newNode;    
        }    
        else     
        {   
          node  *temp=head;
            while(temp->next != head){
             temp=temp->next;
                
            }
            temp -> next =newNode;  
            newNode->next=head;
            head = newNode;    
        } 
}
void display(){
    node *temp=head;
    if(head==NULL){
        printf("linked list is empty");
    }
    do{
        printf("%d ",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("\n");
    
}
void display_n_nodes(){
    int n;
    scanf("%d",&n);
    node *temp=head;
    if(head==NULL){
        printf("linked list is empty");
    }
    for(int i=0;i<n;i++){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main() {
   int ch;
   while(1){
       scanf("%d",&ch);
   if(ch==1){
       int val;
       scanf("%d\n",&val);
       insert_at_head(val);
   }
  else  if(ch==2){
      display_n_nodes();
  }
  else if(ch==3){
      display();
  }
   else{
       printf("Thank you");
       break;
     }
   }
 }
	
