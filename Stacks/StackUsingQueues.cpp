#include<bits/stdc++.h.h>
using namespace std;
//By making push operation costly 
//push first element in queue2
//then push all the elements orderwise from q1 to q2
//then finally swap q2 elements with q1

class Stack
{
    queue<int> q1,q2;
    public:
    void push(int x)
    {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> q=q1;
        q1=q2;
        q2=q;
        
    }
    void pop()
    {
        if(q1.empty())
        {
            return ;
        }
        q1.pop();
    }
    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        return q1.front();
    }
    int size()
    {
        return q1.size();
    }
};
//by making pop operation costly 
//leave one elment in q1 push others in q2
//pop the only left element from q1
//swap the elements of two queues
class Stack1
{
    queue<int> q1,q2;
    public:
    void pop()
    {
        if(q1.empty())
        {
            return ;

        }
        while(q1.size()!=-1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();

        //swap 
        queue<int> q=q1;
        q1=q2;
        q2=q;
    }
    void push(int x)
    {
        q1.push(x);
    }
    int top()
    {
        if(q1.empty())
        {
            return -1;
        }
        while(q1.size()!=-1)
        {
            q2.push(q1.front());
            q1.pop();

        }
        int temp = q1.front();
 
        // to empty the auxiliary queue after
        // last operation
        q1.pop();
 
        // push last element to q2
        q2.push(temp);
 
        // swap the two queues names
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return temp;
    }
    int size()
    {
        return q1.size();
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
 
    cout << "current size: " << s.size()
         << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
 
    cout << "current size: " << s.size()
         << endl;
    return 0;
}