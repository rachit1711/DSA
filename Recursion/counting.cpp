#include<bits/stdc++.h>
using namespace std;
void getCounting(int n)
{
    //base case
    if(n==0)
    {
        return ;
    }
    //head recursion
   /* getCounting(n-1);
    cout<<n<<endl;*/

    //tail recursion
    cout<<n<<endl;
    getCounting(n-1);  
}
int main()
{
    int n;
    cout<<"Enter the input n"<<endl;
    cin>>n;

    cout<<"Counting : "<<endl;
    getCounting(n);
    return 0;
}