#include <iostream>
using namespace std;

int main() {
  int t;
    cin>>t;
    while(t--)
    {
     int num,m,sum=0;
     cin>>num;
     while(num>0)
     {
      m=num%10;
      sum+=m;
      num/=10;
     }
     cout<<sum<<"\n";
    }
    return 0;
}
