#include<bits/stdc++.h>
using namespace std;
bool BinarySearch(int *arr,int s,int e,int k)
{
    int mid=s+(e-s)/2;
    //base case
    //element found
    if(s>e)
    {
        return false;
    }
    
    //element found
    if(arr[mid]==k) return true;

    
    if(arr[mid]<k)
    {
        return BinarySearch(arr,mid+1,e,k);

    }
    else{
        return BinarySearch(arr,s,mid-1,k);
    }


}
int main()
{
    int arr[5]={2,4,6,10,12};
    int size=5;
    int key=15;
    bool ans = BinarySearch(arr,0,5,key);
    if(ans) cout<<"Element is present"<<endl;
    else cout<<"Element is not present";
    return 0;
}