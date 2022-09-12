#include<bits/stdc++.h.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag = false;
    string op= s.substr(s.length()-3,3);

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a' || s[i]=='b')
        {
            flag = true;
        }
        else 
        {
            flag = false;

        }
    }
    
    if(op=="abb" && flag )
    {
        cout<<"valid";
        
    }
    else
    {
        cout<<"invalid";
    }
    return 0;
}