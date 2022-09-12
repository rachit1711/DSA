//we need to return the total number of ways in which we can reach the nth stair from 0th stair either by climbing 1 step at a time or 2 steps each time
int countDistinctWayToClimbStair(long long nStairs)
{
    //  Write your code here.
    //base case
    if(nStairs<0)
    {
        return 0;
    }
    if(nStairs==0)
    {
        return 1;
    }
    //rec call
    int ans=countDistinctWayToClimbStair(nStairs-1)+countDistinctWayToClimbStair(nStairs-2);
    return ans;
}

//TLE
//optimised through DP