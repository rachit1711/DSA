#include<bits/stdc++.h.h>
vector<int> findSpans(vector<int> &prices) {
    // Write your code here
     vector<int> ans;
    stack<pair<int,int>> s;
    for(auto price:prices)
    {
        int days=1;
        while(!s.empty() && s.top().first<=price)
        {
            days+=s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;
}