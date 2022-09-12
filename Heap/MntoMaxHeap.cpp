#include<iostream> 
using namespace std;
void Maxheapify(int arr[],int i,int n)
{
    int largest =i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[i])
    {
        largest=left;

    }
    if(right<n && arr[right]>arr[largest])
    {
        largest=right;
    }
    if(largest!=i)
    {
        ///means it has been updated
        swap(arr[i],arr[largest]);
        Maxheapify(arr,largest,n);
    }
}
//build max heap from bottommost rightmost node
void convertmaxheap(int arr[],int n)
{
    for(int i=(n-2)/2;i>=0;--i)
    {
        Maxheapify(arr,i,n);
    }
    

}
void printArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
}
int main()
{
    // array representing Min Heap
    int arr[] = {3, 5, 9, 6, 8, 20, 10, 12, 18, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printf("Min Heap array : ");
    printArray(arr, n);
 
    convertmaxheap(arr, n);
 
    printf("\nMax Heap array : ");
    printArray(arr, n);
 
    return 0;
}