#include<stdio.h>
int sum (int a,int b){
    int res=a+b;
    return res;
}

int main() {
  int a,b,res;
  scanf("%d %d",&a,&b);
  res=sum(a,b);
  printf("%d",res);
}