//we need to first print spaces then numbers in incresing order then numbers in decreasing order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        //first print spaces
        int j;
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        //then print numbers in increasing order
        
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        //print 3rd triangle
        int start=i-1;
        for(int i=start;i>=1;i--)
        {
            cout<<start;
            start--;
        }
        
       
        cout<<endl;
    }


    return 0;

}