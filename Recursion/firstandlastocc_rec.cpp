#include<bits/stdc++.h>
using namespace std;
int firstOcc(int arr[],int s,int e,int key,int n)
{
    s=0;
    e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1; //as first occ will be in leftmost part

        }
        else if(key>arr[mid])
        {
            return firstOcc(arr,(mid+1),e,key,n);
        }
        else if(key<arr[mid])
        {
           return firstOcc(arr,s,(mid-1),key,n);
        }
        else{
            return -1;
        }
        

    }
}
int lastOcc(int arr[],int s,int e,int n,int key)
{
    s=0;
    e=n-1;
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
            return lastOcc(arr,mid+1,e,n,key);
        }
        else if(key<arr[mid])
        {
            return lastOcc(arr,s,mid-1,n,key);
        }
        else
        {
            return -1;
        }
        
    }
}
int main()
{
    int even[5]={1,2,3,4,5};
    int n = sizeof(even) / sizeof(int);
    cout<<"First occurence of 3 is at Index: "<<firstOcc(even,0,n-1,3,5)<<endl;
    cout<<"Last occurence of 3 is at Index: "<<lastOcc(even,0,n-1,5,3)<<endl;
    return 0;
}