class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        list<int> l; //to store kaam ke elements all elements less than element at jth index are ignored in this list
        int i=0;
        int j=0;
        if(k>nums.size())
        {
            ans.push_back(*max_element(l.begin(),l.end()));
            return ans;
        }
        while(j<nums.size())
        {
            while(l.size()>0 && l.back()<nums[j])
            {
                l.pop_back();
            }
            l.push_back(nums[j]);
            if((j-i+1)<k)
            {
                j++;
            }
            else if(j-i+1==k)
            {
                //max element of every window will be the front element of the list 
                ans.push_back(l.front());
                //now 
                //before sliding the window we check if the current element of array is already present in the lst then pop that out 
                if(l.front()==nums[i])
                {
                    l.pop_front();
                }
                //slide window
                i++;
                j++;
                
            }
        }
        return ans;
    }
};