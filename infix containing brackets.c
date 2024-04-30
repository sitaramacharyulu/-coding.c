//2+3*4-->int its infix form
//infix:operators are in placed in between operands
//(2+3)*4-->prefix:
//prefix:operators will be place infront of operands
//A+B-->Infix form
//+AB-->prefix form
//AB+-->postfix form
//COVERT INFIX INTO POSTFIX 
#include <stdio.h>
#include<string.h>
int get_priority(char ch){
    if(ch=='/' || ch=='*') return 3;
    else if(ch=='+' || ch=='-')return 2;
    else if(ch>='A' && ch<='Z')return 1;
    else return 0;
}
void convert_infix_to_postfix(char *infix){
    char postfix[101];
    char st[101];
    int top=-1,i,j=0;
    for(i=0;i<strlen(infix);i++){
        int priority=get_priority(infix[i]);
        if(priority==1){//operend
            postfix[j++]=infix[i];
            
        }
        else if(infix[i]=='('){
            ++top;
          st[top]='(';
        }
        else if(infix[i]==')'){
            while(st[top]!='('){
            postfix[j++]=st[top--];

                
            }
                top--;
            
        }
        else{
            while(top!=-1 && priority<=get_priority(st[top])){
                postfix[j++]=st[top];
                top--;
            }
            top++;
            st[top]=infix[i];
        }
    }
    while(top!=-1) {
    postfix[j]=st[top];
    j++;
    top--;
    }
    postfix[j]='\0';
    
        printf("%s",postfix);
}
int main() {
char infix[101];
scanf("%s",infix);
convert_infix_to_postfix(infix);
}