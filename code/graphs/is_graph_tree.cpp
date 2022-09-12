#include<bits/stdc++.h>
using namespace std;

#define MAX 1001

vector<int> g[MAX];
vector<int> vis(MAX,0);
vector<int> parent(MAX,-1);

//cycle detection using dfs
bool dfs(int u)
{
    vis[u]=1;
    for(auto it:g[u])
    {
        if(!vis[it])
        {
           parent[it]=u; 
           if(dfs(it)) return true;
        }
        else if(parent[u]!=it) return true;
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    if(dfs(0)) return !printf("Graph is Not a Tree! (It is Cyclic)");
    for(int i=0;i<n;i++) if(!vis[i]) return !printf("Graph is Not a Tree! (It has Multiple Components)");

    printf("graph is a tree");
    return 0;
}