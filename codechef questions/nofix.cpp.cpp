#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
          int n,ct=0;
          cin>>n;
          int a[n];
          for(int i=0;i<n;i++)
          {
               cin>>a[i];
               if(i+ct+1==a[i])
               {
                    ct++;
               }
          }
          cout<<ct<<endl;
     }
	// your code goes here
	return 0;
}
