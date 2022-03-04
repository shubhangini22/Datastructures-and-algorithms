#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int n,l,x;
          cin>>n>>l>>x;
          int r=n-l;
          if(r>l)
          {
               cout<<l*x<<"\n";
               
          }
          else if(l>=r)
          {
               cout<<r*x<<"\n";
          }
     }
	// your code goes here
	return 0;
}
