#include<bits/stdc++.h>
using namespace std;
struct node
{
    int u,v,wt;
    node(int first,int second,int weight)
    {
        u=first;
        v=second;
        wt=weight;
    }
};
int main()
{
    int V,E;
    cin>>V>>E;
    vector<node> edges;
    for(int i=0;i<E;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back({u,v,wt});

    }
    int src;
    cin>>src;
    int inf=10000000;
    //initialize a dist array
    vector<int> dist(V,inf);
    dist[src]=0;
    for(int i=1;i<V-1;i++)
    {
        for(auto it:edges)
        {
            if(dist[it.u]+it.wt<dist[it.v])
            {
                dist[it.v]=dist[it.u]+it.wt;
            }
        }
    }//relaxation done for every edge N-1 times
    int flag=0;
    for(auto it:edges)
    {
        if(dist[it.u]+it.wt<dist[it.v])
        {
            cout<<"Graph contains a Negative Cycle"<<endl;
            flag=1;
            break;
        }
    }
    if(!flag)   
    {
        //if it doesnt contains a negative cycle
        for(int i=0;i<V;i++)
        {
            cout<<i<<" "<<dist[i]<<endl;
        }
    }
    return 0;


    

}