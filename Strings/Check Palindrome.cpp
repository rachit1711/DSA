#include<bits/stdc++.h.h>
using namespace std;
int getlength(char name[])
{

    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
bool checkPalindrome(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(a[s]!=a[e]) return 0;
        else
        {
            s++;
            e--;

        }
    }
    return true;

}
int main()
{
    char name[20];
    cin>>name;
    int len=getlength(name);
    
    if(checkPalindrome(name,len))
    {
        cout<<name<<" is Palindromic String"<<endl;
    }
    else{
        cout<<name<<" is not a Palindromic String"<<endl;
    }
    return 0;
}