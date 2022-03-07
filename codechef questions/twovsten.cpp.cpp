#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int x;
          cin>>x;
          if(x%5!=0)
          cout<<"-1\n";
          else if(x%10==0)
          cout<<"0\n";
          else 
          cout<<"1\n";
          
     }
	// your code goes here
	return 0;
}
