/*
*
**
***
****
*****
****
***
**
*
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=5;
   // cout<<"Enter number of rows and columns"<<endl;
    //cin>>m>>n;
    for(int i=0;i<2*m;i++)
    {
        int totalColsInaRow;
        if(i>m)
        {
            totalColsInaRow=2*m-i;
        }
        else{
            totalColsInaRow=i;
        }
        for(int j=0; j<totalColsInaRow; j++)
        { //number of columns in every row is equal to the row number 
            cout<<"*";
        }
        //when one row is printed , we need to add a newline
        cout<<endl;
    }
    
    return 0;

}