#include <bits/stdc++.h>
using namespace std;

int main() 
{
     int t;
     cin>>t;
     while(t--)
     {
         long long int n,d;
          cin>>n>>d;
         long long int pro=1;
         
          
               
               if(d<=10)
               {
                    pro=pow(2,d);
                    if(pro<=n)
                    {
                         cout<<pro<<"\n";
                    }
                    else
                    {
                         cout<<n<<"\n";
                    }
                    
               }
               else if(d>10 && d<=20)
               {
                    
                   long long int sum=1024*pow(3,(d-10));
                   if(sum<=n)
                   {
                        cout<<sum<<"\n";
                   }
                   else
                   {
                        cout<<n<<"\n";
                   }
               }
               
               else
               {
                    cout<<n<<"\n";
               }
     
             
          
      
          
     }
     
	// your code goes here
	return 0;
}
