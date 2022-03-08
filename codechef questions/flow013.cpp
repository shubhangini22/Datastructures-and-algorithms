#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
          int x,y,z;
          cin>>x>>y>>z;
          if((x+y+z)==180){
               cout<<"YES"<<"\n";
          }
          if((x+y+z)!=180){
               cout<<"NO"<<"\n";
          }
     }
	// your code goes here
	return 0;
}
