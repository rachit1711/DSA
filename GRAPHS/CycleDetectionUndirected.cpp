#include<queue>
#include<unordered_map>
#include<list>
bool isCyclicBFS(int src,unordered_map<int,bool>&visited,unordered_map<int,list<int>> &adj,unordered_map<int,int> parent)
{
    parent[src]=-1;
    visited[src]=1;
    queue<int> q;
    q.push(src);
    while(!q.empty())
    {
        int front=q.front();
        q.pop();
        for(auto i:adj[front])
        {
            if(visited[i]==true && i!=parent[front])
            {
                return true;
            }
            else if(!visited[i])
            {
                q.push(i);
                visited[i]=1;
                parent[i]=front;
            }
        }
    }
    return false;
}
bool isCyclicDFS(int node,int parent,unordered_map<int,bool> visited,unordered_map<int,list<int>> adj)
{
    visited[node]=true;
    for(auto i : adj[node])
    {
        if(!visited[i])
        {
            bool cycledetected=isCyclicDFS(i,node,visited,adj);
            if(cycledetected)
            {
                return true;
            }
        }
        else if(i!=parent)
        {
            return true;
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    //create adj list 
    unordered_map<int,list<int>> adj;
    for(int i=0;i<m;i++)
    {
        int u=edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //to handle disconnected components
    unordered_map<int,bool> visited;
    unordered_map<int,int> parent;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bool ans=isCyclicDFS(i,-1,visited,adj);
            if(ans==1)
            {
                return "Yes";
            }
            
        }
        
    }
    return "No";
}
