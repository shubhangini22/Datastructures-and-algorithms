//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
   int mod=1000000007;
    
    int countFriendsPairings(int n) 
    { 
        if(n<=2) return n;
        int a,b,c;
        //since we are using only previous values
        a=1;
        b=2;
        c=0;
        //data types
        //space optimization
        for(long long int i=3;i<=n;i++)
        {
            c=(((i-1)*a)%mod+(b)%mod)%mod;
            a=b;
            b=c;
        }
        return c%mod;
        // code here
    }
};    
 

//{ Driver Code Starts.
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout <<ob.countFriendsPairings(n); 
    	cout<<endl;
    }
} 

// } Driver Code Ends