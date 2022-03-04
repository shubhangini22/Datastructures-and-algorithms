#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int n,sum=0;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          {
               cin>>a[i];
               if(a[i]%2!=0)
               {
                   sum++; 
               }
               
          }
          if(sum%2!=0)
          {
               sum-=1;
          }
           cout<<sum/2<<"\n";
          
     }
	// your code goes here
	return 0;
}
