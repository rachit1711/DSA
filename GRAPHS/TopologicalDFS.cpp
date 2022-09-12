#include<bits/stdc++.h>
void topoSort(int node,vector<bool> &visited,stack<int> &s,unordered_map<int,list<int>> &adj)
{
    visited[node]=true;
    for(auto nbr : adj[node])
    {
        if(!visited[nbr])
        {
            topoSort(nbr,visited,s,adj);
        }
    }
    s.push(node); //incase of BT push that node in the stack 
}
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    //using DFS
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++)
    {
        int u = edges[i][0];
        int v= edges[i][1];
        
        adj[u].push_back(v);
        
    }
    vector<bool> visited;
    stack<int> s;
    
    for(int i=0;i<v;i++)
    {
        if(!visited[i])
        {
            topoSort(i,visited,s,adj);
        }
    }
    vector<int> ans;
    while(!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
        
    }
    return ans;
}