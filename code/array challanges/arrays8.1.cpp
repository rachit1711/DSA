//largest sum contigous subarrays
//approach2  method
//TC O(n^2)
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
    int pre[n+1];
    pre[0]=0;
    for(int i=0;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    int max=INT32_MIN;
    for(int i=0;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int sum=pre[j]-pre[i-1];
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    cout<<max;
}