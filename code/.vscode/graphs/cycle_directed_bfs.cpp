class Solution
{
    public:
    vector<int>(int N,vector<int> adj[])
    {
        queue<int> q;
        vector<int> indegree(N,0);
        //assign indegrees to all nodes
        for(int i=0;i<N;i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }
    }
    //now push all nodes with indegree 0 into the queue
    for(int i=0;i<N;i++)
    {
        if(indegree[i]==0)
        {
            q.push(i);
        }
    }
    //now keep popping elements one by one from queue having indegree 0 and decrement the indegree of the adjacent nodes of popped nodes by 1
  int count=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        count++;

        for(auto it:adj[node])
        {
            indegree[it]--;

        }
        if(indegree[it]==0)
        {
            q.push(it);
        }
    }
    if(count==N) return false;
    return true;
};