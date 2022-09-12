#include<iostream>
using namespace std;
int main()
{
    /*
    int num=5;
    cout<<num<<endl;

    //address of operator --> &
    cout<<"Address of num is"<<&num<<endl;
    int *ptr=&num;

    cout<<"Value is "<<*ptr<<endl; //value with dereference operator
    cout<<"Address is "<<ptr<<endl;

    double d=4.2;
    double *ptr1=&d;
    cout<<"Value is "<<*ptr1<<endl; //value with dereference operator
    cout<<"Address is "<<ptr1<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<" And "<<sizeof(d)<<endl;
    cout<<"Size of address is "<<sizeof(ptr)<<" And "<<sizeof(ptr1)<<endl;
    */
   int num=5;
   int a=num;
    cout<<"a before "<<num<<endl;
   a++;
   cout<<"a after "<<num<<endl; //same

   int *p=&num;
   cout<<"num before "<<num<<endl;
   (*p)++;
   cout<<"num after "<<num<<endl; //will be incremented as pointers doesnt make a copy

    //copying a pointer
    int *q=p;
    cout<<p<<"  "<<q<<endl;
    cout<<*p<<"  "<<*q<<endl;

    //pointer arithemetic 
    int i=3;
    int *t=&i;
    cout<<(*t)++<<endl;
    cout<<*t<<endl;
    cout<<t<<endl;
    t=t+1;
    cout<<t;

   return 0;
}