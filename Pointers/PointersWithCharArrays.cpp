#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    char cch[6]="abcde";
    cout<<arr<<endl;
    cout<<cch<<endl;

    char *c=&cch[0];
    cout<<c<<endl; //EXCEPTION -- prints the entire string
    
    return 0;
}