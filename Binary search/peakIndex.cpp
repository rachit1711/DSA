int peakIndexInMountainArray(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=s+(e-s)/2;
        while(s<e)
        {
            if(arr[mid]<arr[mid+1])
            {
                //peak lies on incresing line
                s=mid+1;
                
            }
            else
            {
                //either peak lies on decreasing line or peak only
                e=mid;
            }
            mid=s+(e-s)/2;
            
        }
        return s;
}