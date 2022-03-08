#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,r;
        int count=0;
        cin>>n;
        while(n>0)
        {
        r=n%10;
        n=n/10;
        if(r==4){
            count++;
        }
            
        }
        cout<<count<<"\n";
        
        
    }
	// your code goes here
	return 0;
}
