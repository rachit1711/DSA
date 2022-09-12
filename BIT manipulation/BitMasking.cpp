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
int getBit(int n,int pos)
{
    //check if the bit at pos's index is set or not
    if(n & (1<<pos)==0) return 0;
    else return 1;
    
}
int setBit(int n,int pos)
{
    return (n | (1<<pos));
}
int clearBit(int n,int pos)
{
    int mask=~(1<<pos);
    return (n & mask); 
}
int updateBit(int n,int pos,int value)
{
    //clear bit operation
    int mask=~(1<<pos);
    n=n & mask;

    //set bit operation
    return (n | (value<<pos));
}
int toggleBit(int num,int pos)
{
    int mask=(1<<pos);
    return (num ^ mask);
}
int main()
{
    cout<<getBit(309,5)<<endl;
    cout<<setBit(309,3)<<endl;
    cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1);
    cout<<toggleBit(9,2);

    return 0;
}