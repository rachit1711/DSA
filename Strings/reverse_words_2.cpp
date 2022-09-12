#include<bits/stdc++.h.h>
using namespace std;
string reverseWords(string s) {
        string result;
        int i=0;
        int n=s.length();
        
       
        while(i<n)
        {
            //i looks for a spaced character
            while(i<n && s[i]==' ')i++;
            if(i>=n) break;
            int j=i+1;
            //j looks for a non spaced character
            while(j<n && s[j]!=' ')j++;
            
            //find a substring
            string sub=s.substr(i,j-i);
            reverse(sub.begin(),sub.end()); //one extra line
            if(result.length()==0)
            {
                result=sub;
            }
            else
            {
                result=sub+" "+result;
                
            }
            i=j+1;
            
        }
        return result;
    }
int main()
{
    string result1;
    string str;
    //int len=strlen(str);
    getline(cin,str);
    result1=reverseWords(str);
    cout<<"After reverse operation the string is "<<result1;
    return 0;
}