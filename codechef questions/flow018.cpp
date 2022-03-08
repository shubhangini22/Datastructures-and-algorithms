#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int fact=1;
        while(n>0){
            
            fact=fact*n;
            n=n-1;
        }
        cout<<fact<<"\n";
    }
    
	// your code goes here
	return 0;
}
