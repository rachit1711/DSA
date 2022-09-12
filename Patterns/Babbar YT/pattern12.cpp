/*
D
C D
B C D
A B C D
*/
//starting char of every row ='A'+n-i
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        char start='A'+n-i;
        for(int j=1;j<=i;j++)
        {
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }


    return 0;
}