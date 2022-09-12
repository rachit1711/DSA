#include<bits/stdc++.h.h>
using namespace std;
bool search(string pat,string txt)
{
    int n=txt.size();
    int m=pat.size();

    for(int i=0;i<=(n-m);i++)
    {
        bool isEqual=true; //initially
        for(int j=0;j<n;j++)
        {
            if(pat[j]!=txt[j+i])
            {
                isEqual=false; //to avoid TLE
                break;
            }
        }
        if(isEqual)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    char txt[] = "AABAACAADAABAAABAA";
    char pat[] = "AABA";
    bool ans=search(pat,txt);
    if(ans==true)
    {
        cout<<"Strings are Matched"<<endl;
    }
    else
    {
        cout<<"Strings are Not matched"<<endl;
    }
    return 0;

    
}