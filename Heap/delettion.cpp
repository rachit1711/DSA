void deleteFromHeap()
{
    if(size==0)
    {
        cout<<"Heap empty"<<endl;
        return ;
    }
    //last node to first node
    arr[1]=arr[size];
    size--;
    int i=1;
    while(i<size)
    {
        //maxheap
        int leftIdx=2*i;
        int rightIdx=2*i+1;
        if(leftIdx<size && arr[i]<leftIdx)
        {
            swap(arr[i],arr[leftIdx]);
            i=leftIdx;
        }
        else if(rightIdx<size && arr[i]<arr[rightIdx])
        {
            swap(arr[i],arr[rightIdx]);
            i=rightIdx;
        }
        else
        {
            return ;
        }
    }

}