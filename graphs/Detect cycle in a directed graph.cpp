//problem link: https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/

class Solution {
  public:
   bool dfs(int node,vector<int> adj[],vector<bool> &vis,vector<bool>& resS){
       vis[node]=true;
       resS[node]=true;
       for(int child:adj[node]){
           if(!vis[child]){
               if(dfs(child,adj,vis,resS)) return true;
           }else if(resS[child]) return true;
       }
       resS[node]=false;
       return false;
   }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> vis(V,false);
        vector<bool> resS(V,false);
        
        for(int i=0;i<V;i++){
            if(dfs(i,adj,vis,resS)) return true;
        }
        return false;
    }
};
