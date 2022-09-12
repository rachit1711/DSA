void heapify(int arr[],int n,int i)
{
    int largest = i ;
    int left=2*i;
    int right=2*i+1;
    //check for overflow
    if(l<=n && arr[l]>arr[largest])
    {
        largest = l;
    }
    if(r<=n && arr[r]>arr[largest])
    {
        largest=r;
    }
    //if largest is not root
    if(largest != i )
    {
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest );
    }
}
void buildheap(int arr[],int n)
{
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
}