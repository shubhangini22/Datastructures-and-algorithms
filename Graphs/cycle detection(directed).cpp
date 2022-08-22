//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
   bool dfs(vector<int> adj[],int u,vector<bool> &vis,vector<bool> &recstack)
   {
      if(vis[u]==false)
      { 
       vis[u]=true;
       recstack[u]=true;
       for(auto x:adj[u])
       {
           if(vis[x]==false && (dfs(adj,x,vis,recstack))==true)
           {
               return true;
           }
           else if(recstack[x])
           {
               return true;
           }
       }
          
      }
       recstack[u]=false;
       return false;
   }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> vis(V+1,0);
        bool flag=0;
        //rec stack is extra in case of directed graph
        vector<bool> recstack(V+1,0);
        for(int i=0;i<V;i++)
        {
           
                if(dfs(adj,i,vis,recstack))
                flag=1;
            
        }
        return flag;
        // code here
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends