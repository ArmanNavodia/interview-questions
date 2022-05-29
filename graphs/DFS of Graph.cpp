//problem link: https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1/

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node,vector<int> adj[],vector<int> &ans,vector<int> &vis){
        vis[node]=1;
        ans.push_back(node);
        for(int child:adj[node]){
            if(vis[child]==0) dfs(child,adj,ans,vis);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       vector<int> ans;
       vector<int> vis(V,0);
       dfs(0,adj,ans,vis);
       return ans;
    }
};
