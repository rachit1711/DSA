#include<bits/stdc++.h>
using namespace std;
void reachHome(int src,int dest)
{
    cout<<"Source "<<src<<"Dest "<<dest<<endl;
    //base case
    if(src==dest)
    {
        cout<<"Reached Home"<<endl;
        return;
    }
    //processing
    src++;
    //rec relation - tail recursion
    reachHome(src,dest);
}
int main()
{
    int dest=10;
    int src=1;
    reachHome(src,dest);
    return 0;
}