#include <bits/stdc++.h>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          int n;
          cin>>n;
          string s;
          cin>>s;
          int z=0,o=0;
          if(n==1 || n==2)
          {
               cout<<"yes\n";
          }
          else
          {
               for(int i=0;i<n;i++)
               {
                    if(s[i]=='1')
                    {
                         o++;
                    }
                    if(s[i]=='0')
                    {
                         z++;
                    }
               }
               
               if(z%2!=0 && o%2!=0 && z!=o)
               {
                    cout<<"no\n";
               }
               else
               {
                    cout<<"yes\n";
               }
          }
     }
}
