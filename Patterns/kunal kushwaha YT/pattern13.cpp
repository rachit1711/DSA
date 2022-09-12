/*
   1
  22
 333
4444
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
        for(int j=1; j<=n; j++)
        { //number of columns in every row is equal to the row number 
            if(j<=n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<i;
                
            }
        }
        //when one row is printed , we need to add a newline
        cout<<endl;
    }
    
    return 0;

}
