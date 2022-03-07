#include <iostream>
using namespace std;

int main() {
     int m,r,a,b;
     cin>>a>>b;
   m=a-b;
   r=m%10;
   if(r!=9)
   {
        cout<<m+1<<"\n";
   }
   else if(r==9)
   {
        cout<<m-1<<"\n";
   }
	// your code goes here
	return 0;
}
