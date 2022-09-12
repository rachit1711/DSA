#include<bits/stdc++.h>
using namespace std;
vector<int> dsuf;
int find(int v)
{
    if(dsuf[v]==-1)
    {
        return v;
    }
    return find(dsuf[v]);
}
void union_op(int fromP,int toP)
{
    fromP=find(toP);
    toP=find(fromP);
    dsuf[fromP]=toP;
}
bool isCyclic(vector<pair<int,int>> edge_list)
{
    for(auto p:edge_list)
    {
        int fromP=find(fromP);
        int toP=find(toP);

        if(fromP==toP)
        {
            return true;
        }
        union_op(fromP,toP);
    }
    return false;
}
int main()
{
    int E,V;
    cin>>E>>V;
    dsuf.resize(V,-1);//initially all nodes are their own parent
    vector<pair<int,int>> edge_list;
    for(int i=0;i<E;i++)
    {
        //create an edge list
        int from,to;
        cin>>from>>to;
        edge_list.push_back({from,to});

    }
    if(isCyclic(edge_list))
    {
        cout<<"TRUE"<<endl;
    }
    else{
        cout<<"FALSE"<<endl;
    }
    return 0;

}