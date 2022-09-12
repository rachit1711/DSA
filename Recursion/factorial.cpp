#include<bits/stdc++.h>
using namespace std;
int getFactorial(int n)
{
    if(n<=1)
    {
        return 1; //base case
    }
    int answer=n*getFactorial(n-1);
    return answer;
}
int main()
{
    int n;
    cout<<"Enter the input"<<endl;
    cin>>n;
    cout<<"Value of "<<n<<" !"<<" is "<<getFactorial(n)<<endl;
    return 0;
}
//TC O(n)
//SC o(n)
