/*
1 2 3 
1 2 3
1 2 3
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
     cout<<"Enter number of rows and columns"<<endl;
    cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}