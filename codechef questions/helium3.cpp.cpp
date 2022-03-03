#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {    int a,b,x,y;
          cin>>a>>b>>x>>y;
          int m=a*b;
          int n=x*y;
          if(m<=n)
          {
               cout<<"yes\n";
          }
          else
          {
               cout<<"no\n";
          }
     }
	// your code goes here
	return 0;
}
