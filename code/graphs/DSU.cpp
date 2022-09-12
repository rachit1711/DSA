#include<bits/stdc++.h>
using namespace std;
const int N=1e5+6;
vector<int> parent(N);
vector<int> sz(N);
void make_set(int v)
{
    parent[v]=v;
    sz[v]=1;
}
int find_set(int v)
{
    if(v==parent[v])
    {
        return v;
    }
    return parent[v]=find_set(parent[v]);
}