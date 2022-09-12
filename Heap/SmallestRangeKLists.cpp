/*
Algorithm: 
Create an extra space ptr of length k to store the pointers and a variable minrange initialized to a maximum value.
Initially the index of every list is 0, therefore initialize every element of ptr[0..k] to 0, the array ptr will store the index of the elements in the range.
Repeat the following steps until atleast one list exhausts: 
Now find the minimum and maximum value among the current elements of all the list pointed by the ptr[0…k] array.
Now update the minrange if current (max-min) is less than minrange.
increment the pointer pointing to current minimum element.
*/
#include<iostream> 
using namespace std;
#define N 5
int ptr[501];//to store the first elements of every list
void findSmallestRange(int arr[][N],int n,int k)
{
    int i,minval,maxval,minrange,minel,maxel,flag,minind;
    for(int i=0;i<=k;i++)
    {
        ptr[i]=0;
    }
    minrange=INT_MAX; //initially
    while(1)
    {
        
    }
}

/*
void heapify(vector<int> &arr,int n,int i)
{
    int smallest = i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[smallest ]>arr[left])
    {
        smallest=left;
    }
    if(right<n && arr[smallest]>arr[right])
    {
        smallest=right;
    }
    //now check if largest has been updated or not
    if(smallest!=i)
    {
        //it means its updated 
        swap(arr[smallest],arr[i]);
        //largest gone to its correct position 
        heapify(arr,n,smallest);
    }
}vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
	int n=arr.size();
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(arr,n,i);
	}
	return arr;
}

*/