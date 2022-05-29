//problem link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
    void dfs(int node,int par,vector<int> adj[],vector<int> &vis,bool &ans){
        vis[node]=1;
        for(int child:adj[node]){
            if(vis[child]==0) dfs(child,node,adj,vis,ans);
            else{
                if(child!=par && vis[child]==1){
                    ans=true;
                    return;
                }
            }
        }
    }
    bool isCycle(int V, vector<int> adj[]) {
       vector<int> vis(V,0);
       bool ans=false;
       for(int i=0;i<V;i++){
           if(vis[i]==0) dfs(i,-1,adj,vis,ans);
       }
       return ans;
    }
};
