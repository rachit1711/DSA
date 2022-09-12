#include<unordered_map>
#include<queue>
#include<list>
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    //Using KAHN'S algo (BFS TECH )
    //create adj list 
    
    unordered_map<int,list<int>> adj;
    for(int i=0;i<e;i++)
    {
        int u= edges[i][0];
        int v=edges[i][1];
        adj[u].push_back(v);
        //step 1 find all indegrees 
    }
        vector<int> indegree(v);
        for(auto i:adj)
        {
            for(auto j:i.second)
            {
                indegree[j]++;
            }
        }
        //step 2 push those elements with indegree 0 into the queue
        queue<int> q;
        for(int i=0;i<v;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
            
        }
        //step 3 do BFS
        vector<int> ans;
        while(!q.empty())
        {
            int front=q.front(); //step 3.1
            q.pop(); //step 3.2
            
            //step 3.3 store ans
            ans.push_back(front);
            
            //step 3.4 update indegrees of neighbours
            for(auto neighbour:adj[front])
            {
                indegree[neighbour]--;
                if(indegree[neighbour]==0)
                {
                    q.push(neighbour);
                }
                
            }
            
        }
    
    return ans;
}