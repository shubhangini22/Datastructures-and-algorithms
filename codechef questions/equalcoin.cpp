#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
         int x,y;
         cin>>x>>y;
       int m;
       m=2*y+x;
       if(x%2==0 && x!=0)
       {
            cout<<"yes\n";
       }
       else if(x==0 && y%2==0)
       {
            cout<<"yes\n";
       }
       else
       {
            cout<<"no\n";
       }
    }
	return 0;
}
