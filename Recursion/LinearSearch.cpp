#include<iostream>
using namespace std;
bool Linsearch(int arr[],int size,int key)
{
    //base case
    if(size==0) return false;
    if(arr[0]==key) return true;
    else
        bool remainingPart=Linsearch(arr+1,size-1,key);
    
}
int main()
{
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=10;
    bool ans=Linsearch(arr,size,key);
    if(ans) cout<<"Element is present"<<endl;
    else cout<<"Element is not present"<<endl;
    return 0;
}