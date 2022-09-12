#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> vis;
vector<int> col;//color
int main()
{
    int n,m;
    cin>>n>>m;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n,false);
    col=vector<int>(n,-1);
    bool bipart=true;
    void color(int u,int curr);
    {
        if(col[u] != -1 and col[u] != curr)
        {//if node is initially colored and the color to be aasigned doesnt matches the curr color then its not bipartite

            bipart=false;
            return ;
        }
        col[u]=curr;
        if(vis[u])
            return ;
        vis[u]=true;

        //check for neighbours
        for(auto i : adj[u])
        {
            color(i,curr xor 1);
        }


    }
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            color(i,0);
        }
    }
    if(bipart)
        cout<<"Graph is bipartite"<<endl;
    else
        cout<<"Graph is not bipartite"<<endl;

}