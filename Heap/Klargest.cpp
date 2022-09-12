class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    //using minHeap 
	    priority_queue<int,vector<int >,greater<int>> pq;
	    int len = sizeof(arr)/sizeof(arr[0]);
	    for(int i=0;i<n;i++)
	    
	    {
	        pq.push(arr[i]);
	        if(i>=k)
	        {
	            pq.pop();
	        }
	        
	    }
	    
	    vector<int> ans;
	    while(!pq.empty())
	    {
	        ans.push_back(pq.top());
	        pq.pop();
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	    
	}

};