#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
using namespace std;
class Graph
{
    public:
    unordered_map<int,list<pair<int,int>>> adj;
    void addEge(int u,int v,int weight)
    {
        pair<int,int> p = make_pair(v,weight);
        adj[u].push_back(p);
    }
    void printAdj()
    {
        for(auto i : adj)
        {
            cout<<i.first<<" -> "<<endl;
        }
    }
};