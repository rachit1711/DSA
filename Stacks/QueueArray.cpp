#include<bits/stdc++.h.h>
using namespace std;
class Queue{
    int front;
    int rear;
    int capacity;
    int *queue;
    Queue(int c)
    {
        front=rear=0;
        capacity=c;
        queue=new int;
    }
    ~Queue()
    {
        delete[] queue;
    }
    void queueEnqueue(int data)
    {
        if(capacity==rear)
        {
            cout<<"Queue is full"<<endl;
            return ;
        }
        else
        {
            queue[rear]=data;
            rear++;
        }
        return ;

    }
    void queueDequeue()
    {
        if(front==rear)
        {
            cout<<"Queue is empty"<<endl;
            return ;
        }
        else
        {
            for(int i=0;i<rear-1;i++)
            {
                queue[i]=queue[i+1];
            }
            rear--;
        }
        return ;
    }
    void queueDisplay()
    {
        int i;
        if(front==rear)
        {
            cout<<"Queue empty"<<endl;
            return;
        }
        for(int i=front;i<rear;i++)
        {
            cout<<queue[i]<<endl;
        }
        return ;

    }
    void queueFront()
    {
        if (front == rear) {
            cout<<"Queue Empty"<<endl;
            return;
        }
        cout<<"Front element is "<<queue[front];
        return;
    }
};
int main(void)
{
    // Create a queue of capacity 4
    Queue q(4);
 
    // print Queue elements
    q.queueDisplay();
 
    // inserting elements in the queue
    q.queueEnqueue(20);
    q.queueEnqueue(30);
    q.queueEnqueue(40);
    q.queueEnqueue(50);
 
    // print Queue elements
    q.queueDisplay();
 
    // insert element in the queue
    q.queueEnqueue(60);
 
    // print Queue elements
    q.queueDisplay();
 
    q.queueDequeue();
    q.queueDequeue();
 
    printf("\n\nafter two node deletion\n\n");
 
    // print Queue elements
    q.queueDisplay();
 
    // print front of the queue
    q.queueFront();
 
    return 0;
}