#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          bool a1,a2,a3;
          cin>>a1>>a2>>a3;
          bool b1,b2,b3;
          cin>>b1>>b2>>b3;
          if((a1+a2+a3)==(b1+b2+b3))
          cout<<"Pass"<<"\n";
          else
          cout<<"Fail"<<"\n";
          
          
     }
     
	// your code goes here
	return 0;
}
