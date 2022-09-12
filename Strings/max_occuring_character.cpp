#include<bits/stdc++.h.h>
using namespace std;
char getmaxOccuringchar(string s)
{
     int arr[26]={0};
     //create an array containing the ferquencies of each character ina atring

     for(int i=0;i<s.length();i++)
     {
         char ch=s[i];
         int number=0;
         if(ch>='a'&&ch<='z')
         {
             number=ch-'a';
         }
         else if(ch>='A'&& ch<='Z')
         {
            number=ch-'A';
         }
         arr[number]++;
             
     }
     //now get the maximum count of a character
     int maxi=-1,ans=0;
     for(int i=0;i<26;i++)
     {
         if(maxi<arr[i])
         {
             ans=i;
             maxi=arr[i];
         }
     }
     char finalans='a'+ans;
     return finalans;
     
}
int main()
{
    string str;
    cin>>str;
    cout<<getmaxOccuringchar(str)<<endl;

    return 0;
}