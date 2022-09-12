/*
1 
2 3 
3 4 5 
4 5 6 7

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=4;

    
   // cout<<"Enter number of rows and columns"<<endl;
    //cin>>m>>n;
    
    for(int i=1;i<=m;i++)
    {int val=i;
        
        for(int j=1; j<=i; j++)
        {
            
            cout<<val<<" ";
            val+=1;
            

        }
        
        cout<<endl;
    }

    return 0;

}