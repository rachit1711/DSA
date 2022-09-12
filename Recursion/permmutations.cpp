#include<bits/stdc++.h>
using namespace std;
void getPerm(string str,int index)
{
    //base case
    if(index>=str.length())
    {
        cout<<str<<endl;
        return ;

    }
    //logic- we need to swap the current alphabet of the string with the rest others
    for(int i=index;i<str.length();i++)
    {
        swap(str[index],str[i]);
        getPerm(str,index+1);
        //backtrack
        swap(str[index],str[i]); //first get the og string back before moving on to next swapping


    }

}
int main()
{
    cout<<"Enter the string"<<endl;
    string stri;
    cin>>stri;
    cout<<"Printing all the permutations"<<endl;
    getPerm(stri  ,0);
    return 0;

}

