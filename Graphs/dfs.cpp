//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void func(int V,vector<int> adj[],vector<int>&res,int u,bool vis[])
    {
        vis[u]=true;
        res.push_back(u);
        for(auto x:adj[u])
        {
            if(vis[x]!=true)
            {
                //adj[u] for travelling the neighbours
                func(V,adj,res,x,vis);
            }
        }
        return;
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        //vis then don't push back
        vector<int> res;
        bool vis[V+1];
        //we have to make false 
        for(int i=0;i<V;i++)
        {
            vis[i]=false;
        }
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
                func(V,adj,res,i,vis);
            }
        }
        return res;
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends