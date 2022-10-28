//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int func(int N,int arr[],vector<vector<int>>&dp,int idx,int sum)
    {
        if(sum==0) return 1;
        if(sum<0) return 0;
        if(idx<0) return 0;
        if(dp[idx][sum]!=-1) return dp[idx][sum];
        
        return dp[idx][sum]=func(N,arr,dp,idx-1,sum-arr[idx])||func(N,arr,dp,idx-1,sum);
        
        
    }
    int equalPartition(int N, int arr[])
    {
       //like knapsack problem
       vector<vector<int>> dp(1001,vector<int>(1001,-1));
       int sum=0;
       for(int i=0;i<N;i++)
       {
           sum+=arr[i];
       }
       if(sum%2!=0)
       {
           return 0;
       }
       else
       {
           return func(N,arr,dp,N-1,sum/2);
       }
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        //
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends