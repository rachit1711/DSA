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
int main()
{
    for(char c='A';c<='Z';++c)
    {
        cout<<c<<endl;
        printBinary(int(c));

    }
    for(char c='a';c<='z';++c)
    {
        cout<<c<<endl;
        printBinary(int(c));

    }
    char UpperCase='A';
    char LowerCase=char('A'|' '); //upper to lower

    char LowerCase1='b';
    char UpperCase1=char('b'&'_'); //lower to upper
    cout<<UpperCase<<endl;
    cout<<LowerCase<<endl;
     cout<<UpperCase1<<endl;
    cout<<LowerCase1<<endl;
    return 0;
}