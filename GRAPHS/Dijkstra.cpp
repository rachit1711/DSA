#include<iostream>
#include<set>
#include<unordered_map>
const int N =1e5+10;
const int INF=1e9+10;

using namespace std;
vector<pair<int,int>> g[N];

int dijkstra(int source,int n,vector<pair<int,int>> g[N])
{
    vector<int> dist(N,INF);
    vector<int> vis(N,0);
    set <pair<int,int>> st; //<weight,node>
    st.insert({0,source});
    dist[source]=0;
    while(!st.size()>0)
    {
        auto node=*st.begin();
        int v=node.second;
        int v_dist=node.first;
        st.erase(st.begin());
        if(vis[v]) continue;
        vis[v]=1;
        for(auto neighbour: g[v])
        {
            int neighbour_v=neighbour.first;
            int wt=neighbour.second;
            if(dist[v]+wt<dist[neighbour_v])
            {
                dist[neighbour_v]=dist[v]+wt;
                st.insert({dist[neighbour_v],neighbour_v});

            }
        }
    }
    int ans=0;
    for(int i=0;i<=n;++i)
    {
        if(dist[i]==INF)
        {
            return -1;
        }
        ans=max(ans,dist[i]);



    }

    return ans;

}
int main()
{
    int n,m;
    //adj list
    for(int i=0;i<m;i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
        g[y].push_back({x,wt}); //for undirected

    }
}