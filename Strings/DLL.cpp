#include<bits/stdc++.h.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;

    }
};
void insertAtHead(node* &head,int val)
{
    
    node* n = new node(val);
    n->next=head;
    if(head!=NULL)
    {
            head->prev=n;
    }
    
    head=n;

}
void insertAtTail(node* &head,int val)
{
    //base 
    if(head==NULL)
    {
        insertAtHead(head,val);
    }
    //step 1
    node* n= new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
    n->next=NULL;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}
void deletion(node* head,int pos)
{
    if(pos==1)
    {
        deleteAtHead(head);
    }
    node* temp=head;
    int count=0;
    while(temp!=NULL && count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
        temp->next->prev=temp->prev;
    }
    
    delete temp;
}
int main()
{

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head);
    insertAtHead(head,5);
    display(head);
    deletion(head,1);
    display(head);
    return 0;
}




    
