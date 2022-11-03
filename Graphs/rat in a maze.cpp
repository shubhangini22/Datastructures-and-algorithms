//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
     vector<string> ans;
     vector<vector<bool>> vis;
     vector<vector<int>> grid;
     int N;
    bool isvalid(int i ,int j)
    {
       if(i<0 or j<0 or i>=N or j>=N or vis[i][j]==1 or grid[i][j]==0)
       {
           return false;
       }
       return true;
        //function for knowing if a path is valid
    }
    void dfs(int i,int j,string res)
    {
        if(i==N-1 and j==N-1)
        {
            ans.push_back(res);
            return;
        }
        //valid moves
        if(isvalid(i-1,j))
        {
            vis[i-1][j]=1;
            dfs(i-1,j,res+'U');
            vis[i-1][j]=0;
        }
        if(isvalid(i+1,j))
        {
            vis[i+1][j]=1;
            dfs(i+1,j,res+'D');
            vis[i+1][j]=0;
        }
        if(isvalid(i,j-1))
        {
            vis[i][j-1]=1;
            dfs(i,j-1,res+'L');
            vis[i][j-1]=0;
        }
        if(isvalid(i,j+1))
        {
            vis[i][j+1]=1;
            dfs(i,j+1,res+'R');
            vis[i][j+1]=0;
        }
        
        //function for making a move if the path is valid
    }
    
    //function for returning the required vector
    vector<string> findPath(vector<vector<int>> &m, int n) {
        //int i=0,j=0;
        grid=m;
        N=n;
        vis=vector<vector<bool>>(n+1,vector<bool>(n+1,false));
        if(isvalid(0,0))
        {
            vis[0][0]=1;
            dfs(0,0,"");
        }
        return ans;
        // Your code goes here
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends