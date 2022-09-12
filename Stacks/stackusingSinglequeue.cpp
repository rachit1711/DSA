#include<bits/stdc++.h.h>
//stack using single queue
using namespace std;
class Stack{
	queue<int> q;
	public:
	void push(int x)
	{
		q.push(x);
		int s=q.size();
		for(int i=0;i<s;i++)
		{
			q.push(q.front());
			q.pop();
		}
	}
	int pop()
	{
		int n=q.front();
		q.pop();
		return n;
	}
	int top()
	{
		return q.front();
	}
	int size()
	{
		return q.size();
	}
};
int main() {
  Stack s;
  s.push(3);
  s.push(2);
  s.push(4);
  s.push(1);
  cout << "Top of the stack: " << s.top() << endl;
  cout << "Size of the stack before removing element: " << s.size() << endl;
  cout << "The deleted element is: " << s.pop() << endl;
  cout << "Top of the stack after removing element: " << s.top() << endl;
  cout << "Size of the stack after removing element: " << s.size();

}