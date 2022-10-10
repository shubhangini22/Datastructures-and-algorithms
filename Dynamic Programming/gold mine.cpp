
class Solution{
public:
int func(int i,int j,int m, int n, vector<vector<int>> &M,vector<vector<int>>&dp)
    { //first brute force recursion
       //s1,s2,s3 for his three possible steps
       //base case
       if(i<0 || i>=n || j>=m) return 0;
       //we are taking the maximum till any position i,j
       if(dp[i][j]!=-1) return dp[i][j];
       int s1=M[i][j] +func(i-1,j+1,m,n,M,dp);
       int s2=M[i][j] +func(i,j+1,m,n,M,dp);
       int s3=M[i][j] +func(i+1,j+1,m,n,M,dp);
       return dp[i][j]=max(s1,max(s2,s3));
        // code here
    }
 int maxGold(int n, int m, vector<vector<int>> M)
    {
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int s=0;
        for(int i=0;i<n;i++)
        {
         s=max(s,func(i,0,m,n,M,dp));
        }
        return s;
        // code here
    }
};