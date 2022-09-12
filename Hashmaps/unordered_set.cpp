#include<bits/stdc++.h.h>
//keys are stored in unordered fashion (random allocation)
//unordered sets donot have duplicate keys
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(16);
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<endl;
    }
    cout<<"Number of elements "<<s.size()<<endl;

    int key =25;
    if(s.find(key)==s.end())
    {
        cout<<"Key not found"<<endl;
    }
    else
    {
        cout<<"Key found"<<endl;
    }
}
