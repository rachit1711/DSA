#include<iostream>

using namespace std;
int getFibo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    return getFibo(n-1)+getFibo(n-2);
}
int main()
{
    int n;
    cout<<"Enter the input n"<<endl;
    cin>>n;

    cout<<"Value of "<<n<<"th "<<"Fibonacci is "<<getFibo(n)<<endl;
    return 0;
}
/*T.C - O(2^n) S.C - O(n)
We can optimise using iterative method
(Then we can do this in linear time and no stack space required)*/