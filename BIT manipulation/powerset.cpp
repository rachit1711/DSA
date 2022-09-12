#include<bits/stdc++.h.h>
using namespace std;
void powerSet(int arr[],int n)
{
    for( int i=0;i<pow(2,n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {//true
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main()
{
    int arr[4]={1,2,3,4};
    powerSet(arr,4);
    return 0;
}