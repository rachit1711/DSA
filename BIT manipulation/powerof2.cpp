#include<bits/stdc++.h.h>
using namespace std;
bool isPowerof2(int n)
{
    if(n&(n-1))
    {
        cout<<n<<" is not a power of 2"<<endl;
    }
    else{
        cout<<n<<" is a power of 2"<<endl;
    }
}
int main()
{
    isPowerof2(16);
    return 0;
}