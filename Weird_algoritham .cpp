#include <iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	if(n==1){
	    cout<<"1";
	    
	}
	    else{
	        cout<<n<<" ";
	        while(1){
	        if(n%2==0){
	            n=n/2;
	            cout<<n<<" ";
	        }
	       else if(n%2==1){
	            n=(n*3)+1;
	            cout<<n<<" ";
	        }
	        if(n==1){
	            break;
	        }
	    }
	    }
	
}