#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int A[7];
          int s=0,r=0;
          for(int i=0;i<7;i++)
          {
               cin>>A[i];
               if(A[i]==0)
               {
                    r++;
               }
               else if(A[i]==1)
               {
                    s++;
               }
               
          }
          if(s<=r)
          {
               cout<<"NO\n";
          }
          else if(s>r)
          {
               cout<<"YES\n";
          }
          
     }
     
	// your code goes here
	return 0;
}
