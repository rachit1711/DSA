#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr, int index)
{
    if(arr[index]<arr[index-1])
    {
        //current<prev
        return false;
    }
    else
    {
        return true;
    }
    return checkSorted(arr,index+1);
}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter array elements"<<endl;
    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }
    bool answer=checkSorted(arr,1);
    if(answer)
    {
        cout<<"array is sorted"<<endl;
    }
    else
    {
        cout<<"array is not sorted"<<endl;
    }
    return 0;
    

}