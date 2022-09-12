/*
1
2 2
3 3 3 
4 4 4 4
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=4,n=4;
   // cout<<"Enter number of rows and columns"<<endl;
    //cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    
    return 0;

}
