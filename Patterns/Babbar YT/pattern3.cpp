/*
1 2 3
4 5 6
7 8 9
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=3,n=3;

    int count=1;
   // cout<<"Enter number of rows and columns"<<endl;
    //cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<count<<" ";
            count+=1;
            

        }
        
        cout<<endl;
    }

    return 0;

}