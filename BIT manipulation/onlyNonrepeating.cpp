#include<bits/stdc++.h.h>
using namespace std;
int findSingle(int arr[],int arr_size)
{
    int res=arr[0];
    for(int i=1;i<arr_size;i++)
    {
        res=res^arr[i];
        

    }
    return res;
}
int main()
{
    int arr[]={5,4,1,4,3,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Element occuring once is "<<findSingle(arr,n)<<" and rest elements are occuring twice";
    return 0;
}