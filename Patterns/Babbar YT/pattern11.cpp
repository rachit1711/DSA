/*
A 
B C
C D E
D E F G
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int m=4;

    
    for(int i=1;i<=m;i++)
    {
        
        for(int j=1; j<=i; j++)
        {int val='A'+i+j-2;
            char ch=val;
            cout<<ch<<" ";
            val+=1;
            

        }
        
        cout<<endl;
    }

    return 0;
}