#include<bits/stdc++.h.h>
using namespace std;
//LSB (oth ) in binaey of a num is 1 --> odd number
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
    for(int i=0;i<8;i++)
    {
        printBinary(i);
        if(i&1!=0)
        {
            cout<<"Odd"<<endl;
        }
        else
        {
            cout<<"Even"<<endl;
        }


    }
    return 0;
}
