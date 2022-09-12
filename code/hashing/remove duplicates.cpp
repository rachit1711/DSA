//given array of integers we have to remove the duplicates 
#include<bits/stdc++.h>
using namespace std;
vector<int> removeDuplicates(int* arr,int size)
{
    vector<int> output;
    unordered_map<int,bool> vis;
    for(int i=0;i<size;i++)
    {
        if(vis.count(arr[i])>0)
        {
            continue;
        }
        vis[arr[i]]=true;
        output.push_back(arr[i]);
    }
    return output;
}

int main()
{
    int arr[]={1,2,3,3,2,4,4,5,6,7,8};
    vector<int> output=removeDuplicates(arr,11);
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<endl;
    }
    return 0;
}