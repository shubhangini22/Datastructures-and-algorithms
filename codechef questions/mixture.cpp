#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int a,b;
          cin>>a>>b;
          if(a>0 && b>0)
          {
               cout<<"Solution\n";
          }
         
          else if(b==0 && a>0)
          {
               cout<<"Solid\n";
          }
           else if(a==0 && b>0)
          {
               cout<<"Liquid\n";
          }
     }
	// your code goes here
	return 0;
}
