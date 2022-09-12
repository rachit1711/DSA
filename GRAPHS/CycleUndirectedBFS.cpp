#include<iostream>
#include<queue>
#include<list>
#include<unordered_map>
using namespace std;
bool iscycleBFS(int src,vector<vector<int>> adjList,vector<int,bool> visited,int parent)
{
    visited[src]=true;
    for(auto i: adjList[src])
    {
        if(i!=parent)
        {
            if(visited[i])
            {
                return true;
            }
            if(!visited[i] && iscycleBFS(i,adjList,visited,src))
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    //adj list 
    vector<vector<int>> adjList;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    //initially 
    bool cycle = false;
    vector<int,bool> visited(n,false);
    for(int i=0;i<n;i++)
    {
        if(visited[i]==true && iscycleBFS(i,adjList,visited,-1))
        {
            cycle=true;
        }
    }
    if(cycle)
    {
        cout<<"Cycle is present in graph"<<endl;
    }
    else
    {
        cout<<"Cycle is present in graph"<<endl;
    }


}