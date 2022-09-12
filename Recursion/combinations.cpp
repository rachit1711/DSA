#include<bits/stdc++.h>
void combinations(int i,int n,int k,vector<int> &subSet,vector<vector<int>> &ans)
{
    //base cases 
    if(k==0)
    {
        ans.push_back(subSet);
        return;
    }
    //if required elements are greater than the remaining elements
    if(k>n-i+1)
    {
        return ;
    }
    if(i>n)
    {
        return ;
    }
    //include the ith element 
        subSet.push_back(i);
        combinations(i+1,n,k-1,subSet,ans);
        
        //not including the ith element
        subSet.pop_back();
        combinations(i+1,n,k,subSet,ans);
}
vector<vector<int>> combinations(int n, int k)
{
    // Write your code here.
    //subset generation of size k
        vector<int> subSet;
        vector<vector<int>> ans;
        combinations(1,n,k,subSet,ans);
        return ans;
}