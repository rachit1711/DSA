//using DFS 
//visited and currVisited
#include<unordered_map>
#include<queue>
#include<list>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++)
    {
        int u= edges[i].first-1;
        int v=edges[i].second-1;
        adj[u].push_back(v);
        //step 1 find all indegrees 
        
        vector<int> indegree(n);
        for(auto i:adj)
        {
            for(auto j:i.second)
            {
                indegree[j]++;
            }
        }
        //step 2 push those elements with indegree 0 into the queue
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
            
        }
        //step 3 do BFS
        
        //vector<int> ans;
        int count=0;
        while(!q.empty())
        {
            int front=q.front(); //step 3.1
            q.pop(); //step 3.2
            
            //step 3.3 incr count
            count++;
            
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
        if(count==n)
        {
            return false;
            //valid TS => Acyclic
            
        }
        else
        {
            return true;
        }
    }
    
}


//using BFS extension of  kahns
#include<unordered_map>
#include<queue>
#include<list>
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    unordered_map<int,list<int>> adj;
    for(int i=0;i<edges.size();i++)
    {
        int u= edges[i].first-1;
        int v=edges[i].second-1;
        adj[u].push_back(v);
        //step 1 find all indegrees 
        
        vector<int> indegree(n);
        for(auto i:adj)
        {
            for(auto j:i.second)
            {
                indegree[j]++;
            }
        }
        //step 2 push those elements with indegree 0 into the queue
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
            
        }
        //step 3 do BFS
        
        //vector<int> ans;
        int count=0;
        while(!q.empty())
        {
            int front=q.front(); //step 3.1
            q.pop(); //step 3.2
            
            //step 3.3 incr count
            count++;
            
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
        if(count==n)
        {
            return false;
            //valid TS => Acyclic
            
        }
        else
        {
            return true;
        }
    }
    
}