#include<iostream>
using namespace std;
int x=1;
int main()
{
    int x=2;
    {
        int x=3;
        cout<<x;
        cout<<endl;

    }
    cout<<x;
    cout<<::x;
    cout<<endl;
    return ;
    
}