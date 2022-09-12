class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mp;
        int maxi=INT_MIN;
        int i=0,j=0;
        int win_size=j-i+1;
        while(j<s.length())
        {
            mp[s[j]]++;
        }
        if(mp.size()<win_size)
        {
            j++;
        }
        else if(mp.size()==win_size)
        {
            maxi=max(maxi,win_size);
            j++;
        }
        else if(mp.size()>win_size)
        {
            while(mp.size()>win_size)
            {
                mp[s[i]]--;
                
            }
            if(mp[s[i]]==0)
            {
                mp.erase(s[i]);
                i++;
            }
            j++;
            
        }
        return maxi;
    }
};