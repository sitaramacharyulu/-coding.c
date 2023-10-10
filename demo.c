#include<stdio.h>
int main()
{
    int a,b;
    a=2; b=23;//true or false --> 1 0
    int x=(a<b) && !(a==b);
    printf("%d", x);

}
