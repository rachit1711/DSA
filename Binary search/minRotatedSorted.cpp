class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()==0) return -1;
        if(nums.size()==1) return nums[0]; //the very first element is the minimum element only
        
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            //check if the middle element is the minimum element
            if(mid>0 && nums[mid]<nums[mid-1]) //as the array is sorted in increasing order
            {
                return nums[mid];
            }
            //check if the left side of middle element is sorted then minimum element would surely be on right of mid
            else if(nums[low]<=nums[mid] && nums[mid]>nums[high])
            {
                low=mid+1;
                
            }
            else
            {
                high=mid-1;
            }
        }
        return nums[low];
    }
};