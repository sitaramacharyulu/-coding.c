#include <stdio.h>
    void print_array(int *a,int n){
        int i;
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
        printf("\n");
        
    }
     int partition(int *a,int l,int h){
         int pivot=a[l];
         int k=0;
         int result[h-l+1];
         for(int i=l+1;i<=h;i++){
             if(A[i]<=pivot){
                 result[k++]=a[i];
             }
         }
         int out_put=l+k;
         result[k++]=pivot;
         for(int i=l+1;i<=h;i++){
             if(A[i]>pivot){
                 result[k++]=a[i];
             }
         }
         k=0;
         for(int i=l;i<=h;i++){
             a[i]=reult[k];
             k++;
         }
         return output_index;
     }
     void quick_sort(int *a,int l,int h){
         if(l<h){
             int p=partition(a,l,h);
             quick_sort(a,l,p-1);
             quick_sort(a,p+1,h);
         }
     }
    
    int main(){
    int n;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    printf("beforsorting: ");
    print_array(arr,n);
    
    
    printf("AfterSorting: ");
    print_array(arr,n);
    }
