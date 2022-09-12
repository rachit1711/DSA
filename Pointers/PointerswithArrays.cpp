#include<iostream>
using namespace std;
int main()
{
    int arr[10]={2,5,6};
    cout<<"Address of 1st memory block is "<<arr<<endl;
    cout<<"Address of 1st memory block is "<<&arr[0]<<endl;
    cout<<"value of 1st memory block is "<<arr[0]<<endl;
    
    cout<<"4th "<<*arr<<endl; //2
    cout<<"5th "<<*arr+1<<endl; //3 
    cout<<"6th "<<*(arr+1)<<endl; //5
    return 0;
}