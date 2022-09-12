//inbuilt function __gcd
#include<bits/stdc++.h.h >
using namespace std;
int gcd(int a,int b)

{
    if(a==0) return b;
    if(b==0)  return a;

    while(a!=b)
    {
        if(a>b)
        {
            a-=b;

        }
        else
        {
            b-=a;

        }
    }
    return a;
}
int main()
{
    int a,b;
    cout<<"Enter the values of a and b"<<endl;
    cin>>a>>b;
    int ans=gcd(a,b);
    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<ans<<endl;
    cout<<"The LCM of "<<a<<" and "<<b<<" is "<<(a*b)/ans<<endl;
    return 0;
}