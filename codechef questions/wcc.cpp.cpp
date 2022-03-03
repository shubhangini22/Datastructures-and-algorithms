#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int x;
          cin>>x;
          string s;
          cin>>s;
          int car=0,chef=0;
          for(int i=0;i<14;i++)
          {
               if(s[i]=='C')
               {
                  car+=2;  
               }
               else if(s[i]=='N')
               {
                    chef+=2;
               }
               else if(s[i]=='D')
               {
                    chef+=1;
                    car+=1;
               }
          }
          if(car>chef)
          {
              cout<<60*x<<"\n";
          }
         else if(car==chef)
          {
               cout<<55*x<<"\n";
          }
         else if(chef>car)
          {
               cout<<40*x<<"\n";
          }
          
     }
	// your code goes here
	return 0;
}
