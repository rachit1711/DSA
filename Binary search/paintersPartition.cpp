#include<bits/stdc++.h>
using namespace std;
int FindFeasible(int boards[],int n,int limit)
{
    int painters=1;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=boards[i];
        if(sum>limit)
        {
            sum=boards[i];
            painters++;
        }

    }
    return painters;
}
int paintersPartition(int boards[],int n,int m)
{
    int totalLength=0;
    int k=0; //will be the maximum board length size
    for(int i=0;i<n;i++)
    {
        k=max(k,boards[i]);
        totalLength+=boards[i];

    }
    int low=k;
    int high=totalLength;
    while(low<high)
    {
        int mid=low+(high-low)/2;
        int painters=FindFeasible(boards,n,mid);
        if(painters<=m)
        {//supports feasibilty condition
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return low;

}
int main()
{
    int arr[]={5,5,5,5};
    int n=4;
    int m=2;
    cout<<"Minimum time to paint boards : "<<paintersPartition(arr,n,m)<<endl;
    return 0;
}