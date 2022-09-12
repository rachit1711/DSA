class Solution {
    public:
    bool checkforCycle(int node,int parent,vector<int> &vis,vector<int> adj[])
    {
        vis[node]=1;
        for(auto it: adj[node])
        {
            if(vis[it]==0)//for every unvisited node
            {
                if(checkforCycle(it,node,vis,adj)) return true;
                
            }
            else if(it != parent) return true; //if already visited node is not equal to the parent of the curr node
            
        }
        return false;
    }
  public:
 // For every visited vertex ‘v’, if there is an adjacent ‘u’ such that u is already visited and u is not parent of v, then there is a cycle in graph. If we don’t find such an adjacent for any vertex, we say that there is no cycle.
  bool isCycle(int V,vector<int>adj[])
  {
      vector<int> vis(V+1,0);
      for(int i=1;i<=V;i++)
      {
          if(!vis[i])
          {
              if(checkforCycle(i,-1,vis,adj)) return true;
          }
      }
      return false;
  }
};