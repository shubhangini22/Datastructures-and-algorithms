#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int h,c,t;
          cin>>h>>c>>t;
          if(h>50 && c<0.7 && t>5600)
          {
               cout<<"10\n";
          }
          else if(h>50 && c<0.7)
          {
               cout<<"9\n";
          }
          else if(c<0.7 && t>5600)
          {
               cout<<"8\n";
          }
          else if(h>50 && t>5600)
          {
               cout<<"7\n";
          }
          else if(h>50 || c<0.7 || t>5600)
          {
               cout<<"6\n";
          }
          else 
          {
               cout<<"5\n";
          }
          
}	// your code goes here
	return 0;
}
