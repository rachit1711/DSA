//Apna college code
//similar to aggressive cows problem using binary search
#include<bits/stdc++.h>
using namespace std;
bool isFeasible(int mid,int arr[],int n,int k)
{
    int elements=1; //similar to cowCount
    int pos=arr[0]; //similar to lastPos
    for(int i=1;i<n;i++)
    {
        //check for feasibilty condition
        if(arr[i]-pos>=mid)
        {
            pos=arr[i];
            elements++;
            if(elements==k)
            {
                return true;
            }
        }
    }
    return false;
}
int LargestMinDistance(int arr[],int n,int k)
{
    //sort the array for BS aproach
    sort(arr,arr+n);
    int result=-1;
    int low=1;
    int high=arr[n-1];
    while(low<high)
    {
        int mid=low+(high-low)/2;
        //check for feasibilty
        //if it is a possible solution then store that ans and search in right sub search space
        if(isFeasible(mid,arr,n,k))
        {
            result=max(result,mid);
            low=mid+1;

        }
        else
        {
            high=mid;
        }
    }
    return result;

}
int main()
{
    int arr[]={1,2,8,4,9};
    int n=5;
    int k=3;
    cout<<"Largest minimum distance is : "<<LargestMinDistance(arr,n,k)<<endl;
    return 0;
}