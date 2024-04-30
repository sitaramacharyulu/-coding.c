#include <stdio.h>
#include<string.h>
#include<ctype.h>
int calculate(int x,int y,char symbol){
    if(symbol=='+') return x+y;
    else if(symbol=='-')return x-y;
    else if(symbol=='*')return x*y;
    else return x/y;
}
void evaluteRPN(char *postfix){
    int st[101];
    int top=-1,i;
    for(i=0;i<strlen(postfix);i++){
        if(isdigit(postfix[i])){
            st[++top]=postfix[i]-'0';
        }
        else{
            int op2=st[top--];
            int op1=st[top--];
            int res= calculate(op1,op2,postfix[i]);
            st[++top]=res;
        }
    }
    printf("%d",st[top]);
}
int main(){
    char postfix[101];
    scanf("%s",postfix);
    evaluteRPN(postfix);
}

