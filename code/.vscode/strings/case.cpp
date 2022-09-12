#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="asbDDhkhsfdkfh";
    //convert the string into upper case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32; //ASCII value
        }
    }
    cout<<str;

   
    //convert the string into lower case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]+=32; //ASCII value
        }

    }
    
}