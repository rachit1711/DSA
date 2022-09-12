//largest sum contigous subarrays
//brute force method
//TC O(n^3)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=INT32_MIN;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+a[k];
            }
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    cout<<max;
    return 0;
}