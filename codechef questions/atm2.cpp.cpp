#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int n,k;
          cin>>n>>k;
          int a[n];
          string s;
          for(int i=0;i<n;i++)
          {
               cin>>a[i];
               if(a[i]<=k)
               {
                    
              
                k=k-a[i];
                s.push_back('1');
              
                    
               }
               else if(a[i]>k)
               {
              
                  s.push_back('0');  
               }
          }
          cout<<s<<"\n";
     }
	// your code goes here
	return 0;
}
