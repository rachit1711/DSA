#include<bits/stdc++.h>
using namespace std;

//convert an array to heap using heapify method
void heapify(int arr[],int n ,int i)
{
    int largest =i;
    int l=2*i;
    int r=2*i+1;
    //check for overflow conditions
    if(l<=n && arr[l]>arr[largest])
    {
        largest=l;
    }
    if(r<=n && arr[r]>arr[largest])
    {
        largest=r;
    }
    //if largest is not root
    if(largest!=i)
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}
void buildHeap(int arr[],int n)
{
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
}
void printHeap(int arr[], int n)
{
    cout << "Array representation of Heap is:\n";
 
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
int main()
{
    // Binary Tree Representation
    // of input array
    //                 1
    //           /     \
    //            3         5
    //      /    \     /  \
    //        4      6   13  10
    //    / \    / \
    //      9   8  15 17
    int arr[] = { 1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    buildHeap(arr, n);
 
    printHeap(arr, n);
    // Final Heap:
    //                 17
    //           /      \
    //             15         13
    //       /    \      /  \
    //         9      6    5   10
    //     / \    /  \
    //       4   8  3    1
 
    return 0;
}