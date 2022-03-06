#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int a,b,c,d;
          cin>>a>>b>>c>>d;
          if(a+b+c<=d)
          {
               cout<<"1\n";
          }
          else if(a+b+c>d && (a+b<=d || b+c<=d || a+c<=d))
          {
               cout<<"2\n";
          }
          else if(a+b+c>d && (a+b>d || b+c>d || a+c>d))
          {
               cout<<"3\n";
          }
     }
	// your code goes here
	return 0;
}
