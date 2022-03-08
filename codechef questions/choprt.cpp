#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
          int m,n;
          cin>>m>>n;
          if(m>n){
               cout<<">\n";
          }
          
          if(m<n){
               cout<<"<\n";
               
          }
         
     
          if(m==n){
               cout<<"=\n";
          }
          
     }
	// your code goes here
	return 0;
}
