#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph
{
    public:
    unordered_map<int,list<int>> adj;
    void addEdge(int u,int v,bool isDirected)
    {
        //isdirected == 0 ->undirected
        //isDirected ==1 ->directed
        //create an edge from u to v
        adj[u].push_back(v); //u->v always (directed or undirected)
        if(isDirected==0)
        {
            //undirected graph
            adj[v].push_back(u);
        }
        


    }
    void printAdjList()
    {
        for(auto i :adj)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<j<<", ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    int n,m;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    cout<<"Enter number of edges"<<endl;
    cin>>m;
    Graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }
    g.printAdjList();
    return 0;
}
