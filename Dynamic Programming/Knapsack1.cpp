{
    public:
    
    //Function to return max value that can be put in knapsack of capacity W.
    int func(int W,int wt[],int val[],int i,vector<vector<int>>&dp)
    {
       if(i==0 || W==0) return 0;
        if(dp[i][W]!=-1) return dp[i][W];
        //not taking
        
        //taking
        //base case for taking
        if(W-wt[i-1]>=0)
       {
        return dp[i][W]=max(func(W-wt[i-1],wt,val,i-1,dp)+val[i-1],func(W,wt,val,i-1,dp));
           
       }
       
       return dp[i][W]=func(W,wt,val,i-1,dp);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        return func(W,wt,val,n,dp);
       // Your code here
    }
    //use call by address if you are declaring in other function
};