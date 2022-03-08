#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,r,a,b;
        int rev=0;
        int sum=0;
        cin>>n;
        m=n;
        while(n>0){
            r=n%10;
            n=n/10;
            rev=rev*10+r;
        
            
        }
        a=rev%10;
        b=m%10;
        sum=a+b;
        cout<<sum<<"\n";
        
    }
	// your code goes here
	return 0;
}
