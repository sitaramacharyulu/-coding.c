
//merge sort
//1.uses merging process as a sub-routine
//2.merge sort is invented in 1945
//john von neumann is the inventor.
//4.an array with one element is always sorted
//5.divide and conquer technique
//6.
#include <stdio.h>
void print_array(int *a ,int size){
    for(int i=0;i<size;i++){
    printf("%d ",a[i]);
        
    }
}
void merge(int *a,int l,int m,int h){
    int i=l,j=m+1,k=0;
    int res[h-l+1];
    while(i<=m && j<=h){
        if(a[i]<=a[j]){
            res[k]=a[i];
            i++;
            k++;
        }
        else{
           res[k]=a[j];
           j++;
           k++;
        }
    }
    while(i<=m){
        res[k]=a[i];
        k++;
        i++;
    }
    while(j<=h){
        res[k]=a[j];
        k++;
        j++;
    }
    k=0;
    for(i=l;i<=h;i++){
        a[i]=res[k];
        k++;
    }
}
void mergeSort(int *a ,int l, int h){
    if(l<h){
        int m=(l+h)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,h);
        merge(a,l,m,h);
    }
    
}

int main() {
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
     mergeSort(a,0,n-1);
     print_array(a,n);
    
    

}