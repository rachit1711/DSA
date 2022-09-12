#include<bits/stdc++.h.h>
using namespace std;
int firstOcc(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int lastOcc(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
}
int count(int arr[],int n,int key)
{
    //get index of firstOcc
    int low=firstOcc(arr,n,key);

    //get index of lastOcc
    int high=lastOcc(arr,n,key);

    return high-low;


}
int main()
{
  int arr[] = {1, 2, 2, 3, 3, 3, 3};
  int x =  1;  // Element to be counted in arr[]
  int n = sizeof(arr)/sizeof(arr[0]);
  int c = count(arr, n, x);
  printf(" %d occurs %d times ", x, c);
  return 0;
}