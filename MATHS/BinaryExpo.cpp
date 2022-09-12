#include<bits/stdc++.h.h>
using namespace std;
const int mod =1e9+7;
int BinExpRecur(int a,int b)
{
    if(b==0) return 1;
    if(b==1) return a;
    long long res=BinExpRecur(a,b/2);
    if(b&1)
    {
        //b is odd
        return (a*((res*res)%mod))%mod;
    }
    else{
        //b is even
        return (res*res)%mod;
    }
}
long long BinExpIter(long  a ,long  b)
{
    int ans=1;
    while(b>0)
    {
        if(b&1)
        {
            //if b is odd
            ans=(ans*a)%mod;
        }
        a=(a*a)%mod;
        //divide the power b by 2
        b=b>>1;

    }
    return ans;
}
int main()
{
    int a=2;
    int b=13577;
    cout<<BinExpRecur(a,b)<<endl;
    cout<<BinExpIter(a,b);
    return 0;
}