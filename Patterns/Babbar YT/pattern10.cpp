/*
A
B C
D E F
G H I J
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int count='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char ch=count;
            cout<<ch<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}