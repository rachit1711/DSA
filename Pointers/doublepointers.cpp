#include<iostream>
using namespace std;
/*
void update(int **p2)
{
    //p2=p2+1; //no change 
    //*p2=*p2+1; //p1 will be incremented to next address block
    **p2=**p2+1; //i will change

}*/
int main()
{
    /*
    int i=5;
    int *p1=&i;
    int **p2=&p1;

    cout<<"Worked fine"<<endl;
    cout<<p1<<endl;
    cout<<"address of p1 is "<<&p1<<endl;
    cout<<*p2<<endl;

    cout<<"Printing i"<<endl;
    cout<<i<<endl;
    cout<<*p1<<endl;
    cout<<**p2<<endl;

    cout<<"Printing p1"<<endl;
    cout<<p1<<endl;
    cout<<*p2<<endl;
    cout<<&i<<endl;

    cout<<"Printing p2"<<endl;
    cout<<p2<<endl;
    cout<<&p1<<endl;

    cout<<"________________"<<endl;
    cout<<"i before "<<i<<endl;
    cout<<"p1 before "<<p1<<endl;
    cout<<"p2 before "<<p2<<endl;
    update(p2);
    cout<<"i after "<<i<<endl;
    cout<<"p1 after "<<p1<<endl;
    cout<<"p2 after "<<p2<<endl;
    */
  /*int first =6;
   int *p=&first;

   int *q=p;
   (*q)++;
   cout<<first<<endl;*/
    char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
    return 0;
}