#include<bits/stdc++.h>
using namespace std;
vector<bool> vis;
    vector<int> components;
    vector<vector<int>> adj;
int get_comp(int idx)
{
    if(vis[idx])
        return 0;
    vis[idx]=true;
    int ans=1;
    for(auto i : adj[idx])
    {
        if(!vis[i])
        {
            ans+=get_comp(i); //recur
            vis[i]=true;
        }
    }
    return ans;

}
int main()
{
    int v,e;
    int n;

    
    cin>>v>>e;
    adj=vector<vector<int>>(n);
    vis=vector<bool>(n,0);

    for(int i=0;i<e;i++)
    {//input graph
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<v;i++)
    {
        if(!vis[i])
        {
            components.push_back(get_comp[i]);
        }
    }
    for(auto i : components)
    {
        cout<<i<<" "<<endl;
    }


}