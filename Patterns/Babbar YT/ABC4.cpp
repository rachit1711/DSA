/*
A B C 
B C D
C D E
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int m=3;

    
    for(int i=1;i<=m;i++)
    {
        
        for(int j=1; j<=m; j++)
        {int val='A'+i+j-2;
            char ch=val;
            cout<<ch<<" ";
            val+=1;
            

        }
        
        cout<<endl;
    }

    return 0;
}