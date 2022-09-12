#include<bits/stdc++.h.h>
using namespace std;
void getSubSequences(string str,int strIndex,string output)
{
    //base case
    if(strIndex==str.length())
    {
        cout<<output<<endl;
        return ;
    }
    //we have 2 options either to include it or exclude it
    //not include
    getSubSequences(str,strIndex+1,output);

    //include
    output.push_back(str[strIndex]);
    getSubSequences(str,strIndex+1,output);
}
int main()
{
    cout<<"enter the string"<<endl;
    string str;

    cin>>str;
    cout<<"Printing all subsequences"<<endl;
    string output="";
    getSubSequences(str,0,output);
    return 0; 
}

