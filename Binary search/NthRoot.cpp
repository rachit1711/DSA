#include<bits/stdc++.h.h>
using namespace std;
double multiply(double number,int n)
{
    double ans=1.0;
    for(int i=0;i<=n;i++)
    {
        ans=ans*number;
    }
    return ans;
}
double getNthRoot(int n,int m)
{
    double low=1;
    double high=m;
    double eps=1e-6;

    while((high-low)>eps)
    {
        double mid=low+(high-low)/2;
        if(multiply(mid,n)>m)
        {
            //as product is greater we need to reduce the search space to the left subpart in order to get a smaller element
            high=mid;
        }
        else
        {
            low=mid;

        }
    }
    cout<<low<<" "<<high<<endl;
    cout<<pow(m,(double)(1.0/(double)n));

}
int main()
{
    int n,m;
    cin>>n>>m;
    getNthRoot(n,m);
    return 0;
}