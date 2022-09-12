#include<iostream>
using namespace std;
int getExpo(int a,int b)
{
    if(b==0)
    {
        return 1; //base case
    }
    int answer=a*getExpo(a,b-1);
    return answer;

}
int exp(int n)
{
    if(n==0)
    {
        return 1;
    }
    //n is odd
    int ans1=exp(n/2);
    if(n%2!=0)
    {
        return 2*ans1*ans1;
    }
    else
    {
        //if n is even
        return ans1*ans1;
    }
}
//special case when base value ie a is equal to 2
int expTwo(int n)
{
    if(n==0)
    {
        return 1;
    }
    int ans=2*expTwo(n-1);
    return ans;

}
int main()
{
    int a,b;
    cout<<"answer is "<<exp(5)<<endl;
    return 0;
}