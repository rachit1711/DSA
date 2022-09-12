#include<bits/stdc++.h.h>
using namespace std;
int minCost(int coins[],int n,int k)
{
    sort(coins,coins,+k);
    int coins_needed=ceil(1.0*n/(k+1));

    int ans=0;
    for(int i=0;i<=coins_needed-1;i++)
    {
        ans+=coins[i];
    }
    return ans;
}
int main()
{
    int coin[] = {8, 5, 3, 10,
                  2, 1, 15, 25};
    int n = sizeof(coin) / sizeof(coin[0]);
    int k = 3;
    cout << minCost(coin, n, k);
    return 0;
}