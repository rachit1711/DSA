//shortest path in undirected graph with unit weights
//approach uses BFS with use of queue
void BFS(vector<int> adj[],int N,int src)
{
    int dist[N];
    //initialize the dist array as inf
    for(int i=0;i<N;i++)
    {
        dist[i]=INT_MAX;

    }
    queue<int> q;
    dist[src]=0;
    q.push(src);

    while(!q.empty())
    {//pop the topmost node of the queue
        int node=q.front();
        q.pop();

        //look for adj nodes of the popped node
        for(auto it:adj[node])
        {
            if(dist[node]+1<dist[it])//if updated dist is lesser than the curr dist , then update the dist
            {
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
    for(int i=0;i<N;i++)
    {
        cout<<dist[i]<<" ";
    }
}