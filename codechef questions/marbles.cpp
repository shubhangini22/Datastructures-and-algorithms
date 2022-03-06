#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll C(ll n , ll k)
{
       if(k==0)
       {
              return 1;
       }
       return (n*C(n-1,k-1))/k;
}
int main()
{
      int t;
      cin>>t;
      
      
      
      while(t--)
      {
          ll n,k;
          cin>>n>>k;
          
          if(k == 0 or k == n)
        {
            cout << "1" << "\n";
            continue;
        }
        
        ll ans = C(n-1,k-1);
        cout<<ans<<"\n";
          
      }
       
}
