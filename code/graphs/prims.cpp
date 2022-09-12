#include<bits/stdc++.h>
using namespace std;
#define V 5
int minKey(int key[], bool mstSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
 
    return min_index;
}
void printMST(int parent[], int graph[V][V])
{
    cout<<"Edge \tWeight\n";
    for (int i = 1; i < V; i++)
        cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<" \n";
}
void primsMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool MST[V];

     // Initialize all keys as INFINITE
     for (int i = 0; i < V; i++)
        key[i] = INT_MAX, MST[i] = false;
    
    key[0]=0;
    parent[0]=-1;
    for(int cnt=0;cnt<V-1;cnt++)
    {
        //pick the min key vertex which is not yet included
        int u=minKey(key,MST);
        MST[u]=true; //mark as visited

        //update the key value and parent of that node 
        for(int v=0;v<V;v++)
        {
            if(graph[u][v]&&MST[v]==false &&graph[u][v]<key[v])
            {
                parent[v]=u;
                key[v]=graph[u][v];
            }
            printMST(parent,graph);
        }
    }
}
int main()
{
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    primsMST(graph);
}