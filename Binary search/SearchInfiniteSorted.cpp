#include<bits/stdc++.h.h>
using namespace std;
int BinarySearch(int arr[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        if(arr[mid]>x)
        {
            return BinarySearch(arr,l,mid-1,x);

        }
        return BinarySearch(arr,mid+1,r,x);
    }
    return -1;
}
int searchInfinite(int arr[],int key)
{
    int low=0;
    int high=1;
    while(arr[high]<key)
    {
        low=high;
        high=2*high;
    }
    return BinarySearch(arr,low,high,key);
}
int main()
{
    int arr[] = {3, 5, 7, 9, 10, 90, 100, 130,
                               140, 160, 170};
    int ans = searchInfinite(arr, 10);
    if (ans==-1)
        cout << "Element not found";
    else
        cout << "Element found at index " << ans;
    return 0;
}
