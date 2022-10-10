//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int func(int n,int x,int y,int z,vector<int>&dp)
    {
        int a=INT_MIN,b=INT_MIN,c=INT_MIN;
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        if(n>=x)  a=func(n-x,x,y,z,dp);
        if(n>=y)  b=func(n-y,x,y,z,dp);
        if(n>=z)  c=func(n-z,x,y,z,dp);
        return dp[n]=1+max(a,max(b,c));
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        vector<int> dp(10005,-1);
        int ans=func(n,x,y,z,dp);
        if(ans<0) return 0;
        else
        {
            return ans;
        }
        //Your code here
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends