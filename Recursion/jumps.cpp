//TC O(3^N) and SC=O(N)
#include<bits/stdc++.h>
using namespace std;
int numberOfJumps(int n)
{
    //check for 3 base cases
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    if(n==1)
    {
        return 1;
    }
    return numberOfJumps(n-1)+numberOfJumps(n-2)+numberOfJumps(n-3);

}
int main()
{
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    cout<<"Number of jumps"<<numberOfJumps(n)<<endl;
}