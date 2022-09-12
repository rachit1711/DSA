#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    //cin>>n;
    //upper half
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;i++)
        {
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //lower half - instead of incrementing just decrement the iterators
     for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;i++)
        {
            cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}