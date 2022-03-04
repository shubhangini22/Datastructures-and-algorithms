#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int a[5],b=0,e=0;
          for(int i=0;i<5;i++)
          {
               cin>>a[i];
               if(a[i]==1)
               {
                    b++;
               }
               else if(a[i]==2)
               {
                    e++;
               }
          }
          if(b>e)
          {
               cout<<"INDIA\n";
          }
          else if(e>b)
          {
               cout<<"ENGLAND\n";
          }
          else
          {
               cout<<"DRAW\n";
          }
     }
	// your code goes here
	return 0;
}
