/*
*
**
***
****
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=4,n=4;
   // cout<<"Enter number of rows and columns"<<endl;
    //cin>>m>>n;
    for(int i=0;i<m;i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;

}
