class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        //step 1 - create a maxheap for first k elements
        priority_queue<int > pq;
        for(int i=0;i<k;i++)
        {
            pq.push(arr[i]);
        }
        //step -2 for rest of the elements do
        for(int i=k;i<=r;i++)
        {
            if(arr[i]<pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        //step - 3 return pq.top()  as ans
        int ans=pq.top();
        return ans;
    }
};
