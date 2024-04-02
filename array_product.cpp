#include <iostream>
using namespace std;

int main() {
long long n1;
cin>>n1;
int a[n1];
for(long long i=0;i<n1;i++){
    cin>>a[i];
}
int n2;
cin>>n2;
int b[n2];
for(long long i=0;i<n2;i++){
    cin>>b[i];
}
int sum=0;
for(long long i=0;i<n1;i++){
    for(long long j=0;j<n2;j++){
        sum+=a[i]*b[j];
    }
}
cout<<sum;
}