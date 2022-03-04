#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int x,y,m=0,n=0;
          cin>>x>>y;
          while(x!=y)
          {
               if(x>y)
               {
                    x-=1;
                    m++;
                    
               }
               else if(x<y)
               {
                    x+=2;
                    n++;
               }
          }
          cout<<m+n<<"\n";
     }
     
	// your code goes here
	return 0;
}
