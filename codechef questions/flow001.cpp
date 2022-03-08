#include<iostream>
using namespace std;

int main() {
    int t;
    
    cin>>t;
    if(0<t<1001)
    {
    for(int i=0;i<t;i++)
    {
        int a,b;
        cin>>a>>b;
        if(0<=a<10001 && 0<=b<10001)
        {
            cout<<a+b<<"\n";
        }
    }
    }
     
     return 0;
    
    
	// your code goes here
	return 0;
}
