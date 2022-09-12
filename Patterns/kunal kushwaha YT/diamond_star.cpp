#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    //for upper half
    for(int i=1;i<=n;i++)
    {
        //first print spaces

        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    //lower half
    for(int i=n;i>=1;i--)
    {
        //first print spaces
    
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}