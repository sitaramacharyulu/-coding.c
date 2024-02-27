#include <stdio.h>
int *bubblesort(int *a,int n){
    int temp;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-2;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
  }
  return a;
}

int main() {
  int n;
  scanf("%d\n",&n);
  int a[n];
  for(int i=0;i<n;i++){
      scanf("%d ",&a[i]);
      
  }
  int *ans;
 ans= bubblesort(a,n);
  for(int i=0;i<n;i++){
      printf("%d ",ans[i]);
  }
}