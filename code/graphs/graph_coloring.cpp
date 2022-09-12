#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int v,e;
    cin>>v>>e;
    vector<vector<int>> g(v);

    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int res[v];//stores the colors of all nodes
    bool available[v];//checks if the color is available or not
    //assign color 0 to first node
    //initially all other nodes are uncolored and none of the color is available
    for(int i=1;i<v;i++)
    {
        res[i]=-1;
    }
    for(int i=0;i<v;i++)
    {
        available[i]=false;
    }
    int cn=0;
    for(int i=0;i<v;i++)
    {
        for(auto x:g[i])
        {
            if(res[x]!=-1)
            {
                //if the color is already taken
                available[res[x]]=true;
                //now the color is blocked and not available further

            }

        }
        int cr;
        for(cr=0;cr<v;cr++)
        {
            if(available[cr]==false)
            {
                //if the color is available
                break;
            }
        }
        //use the color cr
        res[i]=cr;
        cn=max(cr,cn+1);
        //now after moving on to next vertex we have to reset the color once again
        for(auto x:g[i])
        {
            if(res[x]!=-1)
            {
                available[res[x]]=false;
            }
        }

    }
    cout<<cn<<endl;
    for(int i=0;i<v;i++)
    {
        cout<<res[i]<<" ";
    }

}
int_fast32_t main()
{
    
    solve();
    return 0;
}