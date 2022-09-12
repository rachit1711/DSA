#include<iostream>
using namespace std;
int main()
{
    int m; //rows
    cin>>m;
    int n; //cols
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }
    //creation of 2d array done
    //taking ip

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    //releasing the memory
    for(int i=0;i<m;i++)
    {
        delete []arr[i];
    }
    delete []arr;
    
    return 0;
}