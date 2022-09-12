#include<bits/stdc++.h.h>
using namespace std;
void countSort(int arr[],int n)
{
    int maxElement=arr[0]; //gives the size of count array
    for(int i=0;i<n;i++)
    {
        maxElement=max(maxElement,arr[i]);
    }
    int count[maxElement]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    //modify count array 
    for(int i=1;i<=maxElement;i++)
    {
        count[i]+=count[i-1]; //modified count array 
    }
    int output[n];
    //traverse from R->L
    for(int i=n-1;i>=0;i--)
    {
        //VERY IMPORTANT 
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
}

int main()
{
    int arr[]={1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    return 0;
}