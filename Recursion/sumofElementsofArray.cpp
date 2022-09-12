#include<bits/stdc++.h>
using namespace std;
int sumArr(int arr[],int size)
{
    if(size==0) return 0;
    int temp=arr[0];
    temp=temp+sumArr(arr+1,size-1);
    return temp;
}
int main() {
    int arr[5]={3,2,5,1,6};
    int size = 5;
    cout<<sumArr(arr,size)<<endl;
    return 0;
}