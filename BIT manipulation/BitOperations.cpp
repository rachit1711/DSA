#include<bits/stdc++.h.h>
using namespace std;
void printBinary(int num)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((num>>i)&1);
    }
    cout<<endl;
}
int main()
{
    printBinary(9);
    int a=9;
    int i=0;
    //check if ith bit is set or unset
    //mask= 1<<i
    if((a&(1<<i)) != 0)
    {
        cout<<i<<"th bit is set "<<endl;
    }
    else
    {
        cout<<i<<"th bit is not set"<<endl;
    }
    return 0;
}