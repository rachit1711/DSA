/*
1 2 3 4
  2 3 4
    3 4
      4
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=4;
    for(int i=1;i<=m;i++)
    {
        for(int j=1; j<=i-1; j++)
        { 
           cout<<" ";
        }
        for(int j=1;j<=m-i+1;j++)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    
    return 0;

}