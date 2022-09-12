#include<bits/stdc++.h>
using namespace std;
int N=1000000;

bool sieve[N+1];
void createSieve()
{
    for(int i=2;i<=N;i++)
    {
        sieve[i]=true;
    }
    for(int i=2;i*i<=N;i++)
    {
        if(sieve[i]==true)
        {
            for(int j=i*i;j<=N;j++)
            {
                sieve[j]=false;
            }
        }
    }
}
vector<int> generatePrimes(int N)
{
    vector<int> ds;
    for(int i=2;i<=N;i++)
    {
        if(sieve[i]==true)
        {
            ds.push_back(i);
        }
    }
    return ds;
}
int main()
{
    createSieve();
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        //step -1 generate primes till sqrt(R)
        vector<int> primes=generatePrimes(sqrt(r));

        //step -2 dummy array of size r-l+1 and mark that with 1s 
        int dummy[r-l+1];
        for(int i=0;i<r-l+1;i++)
        {
            dummy[i]=1;

        }
        //step 3 mark all  the multiples of prime in dummy as false
        for(auto pr:primes)
        {
            int FirstMultiple=(l/pr)*pr;
            if(FirstMultiple<l) FirstMultiple+=pr;
            for(int j=max(FirstMultiple,pr*pr);j<=r;j+=pr)
            {
                dummy[j-l]=0;

            }
        }
        //step 4 get all the primes
        for(int i=l;i<=r;i++)
        {
            if(dummy[i-l]==1)
            {
                cout<<i<<" ";
            }
        }
        cout<<endl;

    }
}
