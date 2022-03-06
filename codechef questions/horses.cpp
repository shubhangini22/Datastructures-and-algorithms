#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int n,d=0;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          {
               cin>>a[i];
          }
          sort(a,a+n);
          int min=a[1]-a[0];
          for(int i=1;i<n;i++)
          {
             d=a[i]-a[i-1];
             if(d<=min)
             {
                 min=d; 
             }
          }
          cout<<min<<"\n";
     }
	// your code goes here
	return 0;
}
