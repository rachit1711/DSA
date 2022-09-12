#include<iostream>
using namespace std;
// int& func(int a)
// {
//     int num=a;
//     int& ans=num;
//     return ans;

// }
// int* fun(int n)
// {
//     int* ptr=&n;
//     return ptr;
// }
//BOTH THE ABOVE FUNCTIONS WILL RETURN A WARNING DUE TO LIMITED SCOPE OF VARIABLES
void update1(int n)
{
    n++;
}
void update2(int& n)
{
    n++;
}
int main()
{
    /*
    int i=5;
    int &j=i; //reference variable
    cout<<i<<endl; //5
    i++;
    cout<<i<<endl; //6
    j++;
    cout<<i<<endl; //7
    cout<<j<<endl; //7
    */

   int n=5;
   cout<<"Before "<<n<<endl;
   update1(n);
   update2(n);
   cout<<"After "<<n<<endl; //will print the same value as it is pass by value and updates the copy element and not the original


    return 0;
}