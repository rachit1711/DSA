/*
1
1 2
1 2 3 
1 2 3 4
1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=5,n=5;
   // cout<<"Enter number of rows and columns"<<endl;
    //cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1; j<=i; j++)
        { //number of columns in every row is equal to the row number 
            cout<<j<<" ";
        }
        //when one row is printed , we need to add a newline
        cout<<endl;
    }
    
    return 0;

}