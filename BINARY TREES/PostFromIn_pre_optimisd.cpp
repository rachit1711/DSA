#include<bits/stdc++.h.h>
using namespace std;
//use hashmap
int preIndex=0;



void printPost(int in[],int pre[],int inStart,int inEnd,map<int,int> hm)
{
    if(inStart>inEnd)
    {
        return ;
    }
    int inIndex=hm[pre[preIndex++]];
    printPost(in,pre,inStart,inIndex-1,hm);
    printPost(in,pre,inIndex+1,inEnd,hm);
    cout<<in[inIndex]<<" ";
}
void printPostMain(int in[],int pre[],int n)
{
    map<int,int> hm;
    for(int i=0;i<n;i++)
    {
        hm[in[i]]=i;

    } 
    printPost(in,pre,0,n-1,hm);
}
int main()
{
    int in[] = { 4, 2, 5, 1, 3, 6 };
    int pre[] = { 1, 2, 4, 5, 3, 6 };
    int n = sizeof(pre)/sizeof(pre[0]);
     
    printPostMain(in, pre, n);
    return 0;
}
 