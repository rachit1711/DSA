class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        //we need to add k to smallest element and subtract k from greatest element
        //minimum difference can be obtained from consecutive elements
        //so sort the array first 
        sort(arr,arr+n);
        int max_=arr[n-1];
        int min_=arr[0];
        int res=max_-min_;
        for(int i=1;i<n;i++)
        {
            max_=max(arr[i-1]+k,arr[n-1]-k);
            min_=min(arr[i]-k,arr[0]+k);
            res=min(res,max_-min_);

        }
        return res;
    }
};