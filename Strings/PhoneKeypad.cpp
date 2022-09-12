#include<bits/stdc++.h.h>
using namespace std;
int main()
{
    //store all aplhabets according to the keypad nums
       string str[] = {"2","22","222",
                    "3","33","333",
                    "4","44","444",
                    "5","55","555",
                    "6","66","666",
                    "7","77","777","7777",
                    "8","88","888",
                    "9","99","999","9999"
                   };
        string s;
        cin>>s;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                ans=ans+'0'; 
            }
            else
            {
                //calculate the position of that character on a particular key
                int pos=s[i]-'A';
                ans=ans+str[pos];
            }
        }
        cout<<ans<<endl;
    return 0;
}