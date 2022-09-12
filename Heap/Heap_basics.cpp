#include<iostream>
#include<queue>
using namespace std;
class Heap
{
    public:
    int arr[100];
    int size;
    Heap()
    {
        arr[0]=-1;
        size=0;
    }
    //Insertion in heap 
    void insert(int val)
    {
        //add it to end
        size+=1;
        int index=size;
        arr[index]=val;
        //now take it to its correct position 
        while(index>1)
        {
            int parent=index/2;
            //suppose maxHeap
            if(arr[parent]<arr[index])
            {
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return ;
            }
        }

    }
    void deleteFromHeap()
    {
        if(size==0)
        {
            cout<<"Heap empty"<<endl;
            return;
        }
        //step 1 - put last node to first node and remove last node
        arr[1]=arr[size];
        size--;
        //step 2 - propagate the root node to its correct pos
        int i=1;
        while(i<size)
        {
            //assuming maxHeap
            int leftIdx=2*i;
            int rightidx=2*i+1;
            if(leftIdx<size && arr[i]<arr[leftIdx])
            {
                swap(arr[i],arr[leftIdx]);
                i=leftIdx;
            }
            else if(rightidx<size && arr[i]<arr[rightidx])
            {
                swap(arr[i],arr[rightidx]);
                i=rightidx;
            }
            else
            {
                return;
            }
        }

    }
    void print()
    {
        for(int i=1;i<=size;i++)
        {
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};
void heapify(int arr[],int n,int i)
{
    int largest = i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right])
    {
        largest=right;
    }
    //now check if largest has been updated or not
    if(largest!=i)
    {
        //it means its updated 
        swap(arr[largest],arr[i]);
        //largest gone to its correct position 
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n)
{
    int heapsize=n;
    while(heapsize>1)
    {
        //step 1 - swap the first element with the last one
        swap(arr[1],arr[heapsize]);
        //reduce the size of heap as last element is sorted now
        heapsize--;
        //step 3 - call heapify 
        heapify(arr,heapsize,1);

    }
}
int main()
{
    Heap h;
    h.insert(60);
    h.insert(50);
     h.insert(40);
      h.insert(30);
       h.insert(20);
        h.insert(55);
         h.insert(70);
         h.deleteFromHeap();
         h.print();
         int arr[6]={-1,54,53,55,52,50};
         int n=5;
         //build heap 
         for(int i=n/2;i>0;i--)
         {
             heapify(arr,n,i);
         }
         cout<<"Array after heapify() implementation"<<endl;
         for(int i=1;i<=n;i++)
         {
             cout<<arr[i]<<" ";
         }cout<<endl;
        heapSort(arr,n);
        cout<<"Array after heapsort() implementation"<<endl;
         for(int i=1;i<=n;i++)
         {
             cout<<arr[i]<<" ";
         }cout<<endl;

         cout<<"using priority queue here"<<endl;
         //maxheap
         priority_queue<int> pq;
         pq.push(4);
         pq.push(2);
         pq.push(5);
         pq.push(3);     
         cout<<"Element at Top(max) "<<pq.top()<<endl;
         pq.pop();
         cout<<"Element at Top now "<<pq.top()<<endl;
         cout<<"Size of heap "<<pq.size()<<endl;
         if(pq.empty())
         {
             cout<<"maxHeap is empty"<<endl;
         }    
         else
         {
             cout<<"maxHeap is not empty"<<endl;
         }
         //minheap
         priority_queue<int,vector<int>,greater<int>> pqmin;
         pqmin.push(4);
         pqmin.push(2);
         pqmin.push(5);
         pqmin.push(3);     
         cout<<"Element at Top(min) "<<pqmin.top()<<endl;
         pqmin.pop();
         cout<<"Element at Top now "<<pqmin.top()<<endl;
         cout<<"Size of heap "<<pqmin.size()<<endl;
         if(pqmin.empty())
         {
             cout<<"minHeap is empty"<<endl;
         }    
         else
         {
             cout<<"minHeap is not empty"<<endl;
         }
         return 0;

}