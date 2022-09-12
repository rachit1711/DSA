#include<bits/stdc++.h.h>
using namespace std;

int numberOf1s(int n)
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;

    }
    //OR
  /*  for(int i=31;i>=0;--i)
    {
        if(n&(1<<pos)!=0)
        {
            count++;
        }
    }*/
    return count;
    
}
int main()
{
    cout<<numberOf1s(19)<<endl;
    return 0;
}