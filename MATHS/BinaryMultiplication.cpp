#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int binMultiplication(long long  a ,long long b)
{
    int ans=0;
    while(b>0)
    {
        if(b&1) //if bit is set
        {
            ans=(ans+a)%mod;
        }
        a=(a+a)%mod;
        //b=b/2;
        b=b>>1;

    }
    return ans;
}

//tc = O(log^2(n))
int binExp(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=binMultiplication(ans,a);
        }
        a=binMultiplication(a,a);
        //b=b/2;
        b=b>>1;

    }
    return ans;
}

int main()
{
    cout<<binExp(2,10);
    cout<<endl;
    cout<<binMultiplication(3,13);
    return 0;
}