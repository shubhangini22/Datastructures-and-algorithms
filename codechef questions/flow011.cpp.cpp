#include <bits/stdc++.h>
using namespace std;

int main() {
     int  t;
     cin>>t;
     while(t--)
     {
          int s,h,d;
          double g;
          cin>>s;
          if(s<1500)
          {
               g=s+(0.1*s)+(0.9*s);
          }
     else if(s>1500)
     {
          g=s+500+(0.98*s);
     }
     cout<< fixed << setprecision(2) <<g<<"\n";
     }
	// your code goes here
	return 0;
}
