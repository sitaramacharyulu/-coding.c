#include <stdio.h>
int binary_search_recursion(int *a,int low,int high,int n,int key){
    int mid;
    if(low>high){
        return -1;
    }
    else{
        int mid=(low+high)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            binary_search_recursion(a,low,mid-1,n,key);
        }
        else binary_search_recursion(a,mid+1,high,n,key);
    }
            
        
}
/*int binary_search_itirative(int a,int n,int key){
    int i,j,mid;
    i=0;j=n-1;
    while(i<=j){
        mid=(i+j)/2;
        if(a[mid]==key){
        return mid;
        }
        if(a[mid]>key){
            j=mid-1;
        }
        if(a[mid]<key){
            i=mid+1;
        }
    }
    return -1;
    
}*/

int main() {
	int n,low,high;
	scanf("%d\n",&n);
	int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int key;
    scanf("\n%d",&key);
    //printf("%d",binary_search_itirative(a,n,key));
    printf("%d",binary_search_recursion(a,0,n-1,n,key));
    
}
    
    

