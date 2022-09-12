class Solution {
  public:
  bool checkforCycle(int s,int V,vector<int> adj[],vector<int> vis)
  {
      //s is the start point for BFS
      //create   a queue with pair
      queue<pair<int,int>> q;
      vis[s]=true ; //mark start point as visited
      //push the start node in the queue 
      q.push({s,-1});
      
      while(!q.empty())
      {
          //for topmost element of the queue
          int node=q.front().first;
          int par=q.front().second;
          q.pop();
          
          //explore every adj node of the curr node in the adj list
          
          for(auto it: adj[node])
          {
              if(!vis[it])
              {
                  vis[it]=true;
                  q.push({it,node});
              }
              //main logic - if the node is already visited and is not equal to the par node of the curr node then it contains cycle and hence return true
              else if(par!=it)
              {
                  return true;
              }
          }
      }
      return false;
      
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int> vis(V+1,0); //declare a visited array marked initially with 0
        for(int i=1;i<=V;i++)
        {
            if(!vis[i])
            {
                if(checkforCycle(i,V,adj,vis)) return true;
            }
        }
        return false;
    }
};