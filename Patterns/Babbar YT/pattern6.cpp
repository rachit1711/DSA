//floyd's triangle
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m=4,n=4;

    int count=1;
   // cout<<"Enter number of rows and columns"<<endl;
    //cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1; j<=i; j++)
        {
            count+=1;
            cout<<count<<" ";
            
            

        }
        
        cout<<endl;
    }

    return 0;

}