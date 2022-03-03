#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int t1,t2,r1,r2;
          cin>>t1>>t2>>r1>>r2;
          int s1,s2;
          s1=(t1*t1)*(r2*r2*r2);
          s2=(t2*t2)*(r1*r1*r1);
          if(s1==s2)
          {
               cout<<"yes\n";
          }
          else{
               cout<<"no\n";
          }
     }
	// your code goes here
	return 0;
}
