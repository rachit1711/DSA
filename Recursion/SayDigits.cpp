#include<bits/stdc++.h>
using namespace std;
void getSpell(int n,string str[])
{
    //base case
    if(n==0)
    {
        return ;
    }
    //processing
    //fetch the digit
    int digit=n%10;
    //update the number
    n=n/10;
    

    //recursive call - tail recursion
    getSpell(n,str);
    cout<<str[digit]<<" ";
}
int main()
{
    int n=412;

    string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"Answer is:"<<endl;
    getSpell(n,str);
    return 0; 
}
// TC and SC=O(len of number)