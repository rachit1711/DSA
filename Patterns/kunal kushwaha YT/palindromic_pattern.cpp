//we need to first print spaces then numbers in decreasing order then numbers in increasing order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        //first print spaces
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        //then print numbers in decreasing order
        int k=i;
        for(;j<=n;j++)
        {
            cout<<k--<<" ";
        }
        //then print numbers in increasing order
        k=2;
        for(;j<=n+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }


    return 0;

}