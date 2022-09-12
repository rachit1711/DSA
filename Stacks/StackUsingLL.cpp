#include<bits/stdc++.h.h>
using namespace std;
struct Node
{
    public:
    int data;
    Node* link;
};
Node* top;
void push(int data)
{
    Node* temp=new Node();
    if(!temp)
    {
        cout<<"Underflow"<<endl;
        exit(1);
    }
    temp->data=data;
    temp->link=top;
    top=temp;

}
int isEmpty()
{
    return top==NULL;
}
int peek()
{
    if(!isEmpty())
    {
        return top->data;
    }
    else
    {
        exit(1);
    }
}
void pop()
{
    Node* temp;
    if(top==NULL)
    {
        cout<<"StackUnderflow"<<endl;
    }
    else
    {
        temp=top;
        top=top->link;
        free(temp);
    }
}
void display()
{
    Node* temp;
    if(top==NULL)
    {
        cout<<"Underflow"<<endl;
        exit(1);
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            cout<<temp->data<<endl;

        }
        temp=temp->link;
    }

}
// Driver Code
int main()
{
	
	// Push the elements of stack
	push(11);
	push(22);
	push(33);
	push(44);

	// Display stack elements
	display();

	// Print top element of stack
	cout << "\nTop element is "
		<< peek() << endl;

	// Delete top elements of stack
	pop();
	pop();

	// Display stack elements
	display();

	// Print top element of stack
	cout << "\nTop element is "
		<< peek() << endl;
		
	return 0;
}