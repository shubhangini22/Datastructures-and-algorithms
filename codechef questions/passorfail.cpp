#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int n,x,p,m;
          cin>>n>>x>>p;
          m=4*x-n;
          if(m>=p) cout<<"PASS\n";
          else if(m<p) cout<<"FAIL\n";
     }
	// your code goes here
	return 0;
}
