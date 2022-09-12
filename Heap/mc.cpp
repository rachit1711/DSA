#include <bits/stdc++.h.h>
using namespace std;
int findLength(int n,vector<long> a,string x)
{
    long num=0;
    int ans=0;
    
    int cnt=0;
    int j=0;
    long y=stol(x);
    for(int i=0;i<n;i++)
    {
        if(num==0)
        {
            num=a[i];
            ans++;
        }
    
        if(num>y)
        {
            while(j<=i)
            {
                string ok=to_string(a[j]);
                string ok1=to_string(num);
                int po=ok1.size()-ok.size();
                int val=pow(10,po);
                num=num-a[j]*val;
                j++;
                ans--;
                if(num<=y)
                {
                    break;
                }
            }
            
        }
        else if(num!=a[i] and num<y)
        {
            string ok=to_string(a[i]);
            int po=pow(10,ok.size());
            num=num*po;
            num+=a[i];
            ans++;
            while(j<=i and num>y)
            {
                string ok=to_string(a[j]);
                string ok1=to_string(num);
                int po1=ok1.size()-ok.size();
                int val=pow(10,po1);
                num=num-a[j]*val;
                j++;
                ans--;
            }
        }
        cnt=max(cnt,ans);
    }
    return cnt;
}
int main() 
{
    int n;
    cin>>n;
    vector<long> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    string x;
    cin>>x;
    
    cout<<findLength(n,a,x);
    
	return 0;
}