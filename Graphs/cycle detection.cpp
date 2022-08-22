//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool dfs(int V,vector<int> adj[],vector<bool>&vis,int u,int parent,bool &f)
    {
        vis[u]=true;
        
        for(auto x:adj[u])
        {
            
            if(vis[x]==false)
            {
                if(dfs(V,adj,vis,x,u,f)) f=1;
                //update the parent node
                //parent will be u
            }
            else if(x!=parent) 
            f=1;
        }
        return f;
    }
    bool isCycle(int V, vector<int> adj[]) {
        //dfs traversal
        vector<bool> vis(V+1,0);
        bool f=0,flag=0;
        //int parent=adj[0][0];
        
    
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
                if(dfs(V,adj,vis,i,-1,f)) flag=1;
            }
        }
        return flag;
        // Code here
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends