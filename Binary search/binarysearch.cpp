#include<bits/stdc++.h.h>
using namespace std;
int binarySearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2; //to avoid integer overflow

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            //search in right of mid element
            start=mid+1;

        }
        else if(key<arr[mid])
        {
            //search in left of mid element
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1; //not found

}
int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};
    int index=binarySearch(even,6,12);
    cout<<"Index of 12 is "<<index<<endl;
    int oddindex=binarySearch(odd,5,11);

    cout<<"Index of 11 is "<<oddindex<<endl;
    return 0;
}