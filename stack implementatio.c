//stack implementation using array
//we need an array
#include <stdio.h>
int st[10000];
int size;
int top=-1;
void push(int val){
   if(top==size-1){//overflow condition checking
       printf("stack is overflow\n");
   } 
   else{
       top++;
      st[top]=val;//st[++top]=val;
   }
    
}
void pop(){
    //under flow conditon checking
    if(top==-1){
        printf("stack is underflow");
    }
    else{
        printf("deleted element is: %d\n",st[top]);
        top--;
    }
}
void peak(){
    if(top==-1){
        printf("Stack is underflow");
    }
    else{
       printf("top element is:%d\n",st[top]);
    }
}
void display(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d ",st[i]);
        }
        printf("\n");
    }
}
int main() {
    scanf("%d",&size);
    int ch;
    while(1){
    //printf("enter\n1.push\n2.pop\n3.Display\n any other to exist\n")
    scanf("%d",&ch);
    if(ch==1){
       int element;
       scanf("%d",&element);
       push(element);  //push operation
    }
    else if(ch==2){
      pop(); //pop
    }
    else if(ch==3){
        peak();//peak
    }
    else if(ch==4){
       display(); //display
    }
    else{
        break;
    }
    }
}