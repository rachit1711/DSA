#include<iostream>
#include<limits.h>
using namespace std;
#define V 5
// A utility function to find the vertex with
// minimum key value, from the set of vertices
// not yet included in MST
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
    //we need to take 3 arrays
    int  parent[V];
    bool mst[V];
    int key[V];
    //values initialization 
    for(int i=0;i<V;i++)
    {
        key[i]=INT_MAX;
        mst[i]=false;
    }
    key[0]=0;
    parent[0]=-1;

    for(int count=0;count<V-1;count++)
    {
        //step 1 pick minimum from key []
        int u=minKey(key,mst);
        //step2 mark the index of min key as true in mst[]
        mst[u]=true;

        //step 3 - update the key and parent index of adjacent vertices not yet included in the mst[]
        for(int v=0;v<V;v++)
        {
            if(graph[u][v] && mst[v]==false && graph[u][v]<key[v])
            {
                parent[v]=u;
                key[v]=graph[u][v];
            }
        }
    }
    printMST(parent, graph);
}
 
// Driver code
int main()
{
    /* Let us create the following graph
        2 3
    (0)--(1)--(2)
    | / \ |
    6| 8/ \5 |7
    | / \ |
    (3)-------(4)
            9     */
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
 
    // Print the solution
    primsMST(graph);
 
    return 0;
}