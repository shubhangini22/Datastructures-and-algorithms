//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    //combinations
    long long int func(int coin[],int sum,int idx,vector<vector<long long int>>&dp)
    {
        if(sum==0) return 1;
        if(idx<0) return 0;
        //all the states which are changing should refer base case
        long long int ways=0;
        if(dp[sum][idx]!=-1) return dp[sum][idx];
        for(int amount=0;amount<=sum;amount+=coin[idx])
        {
            ways+=func(coin,sum-amount,idx-1,dp);
        }
        return dp[sum][idx]=ways;
    }
    long long int count(int coins[], int N, int sum) {
         vector<vector<long long int>> dp(1001,vector<long long int>(1001,-1));
         
         return func(coins,sum,N-1,dp);
         //coin.size()-1 is to traverse through the entire given array 
         
        // code here.
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++) cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}


// } Driver Code Ends