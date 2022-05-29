//problem link: https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       queue<int> q;
       vector<int> ans;
       bool vis[V];
       for(int i=0;i<V;i++) vis[i]=false;
       q.push(0);
       vis[0]=true;
       
       while(!q.empty()){
           int temp=q.front();
           q.pop();
          ans.push_back(temp);
           for(int i:adj[temp]){
               if(!vis[i]){
               q.push(i);
               vis[i]=true;
           
           }
       }
       }
    
        return ans;
    }
    
};
