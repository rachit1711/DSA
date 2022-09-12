#include<bits/stdc++.h.h>
using namespace std;
class Papa
{
    public:
    void print1()
    {
        cout<<"papa called"<<endl;
    }
};
class Beti : public Papa
{
    public:
    void print2()
    {
        cout<<"beti called"<<endl;
    }


};
class Beta :public Papa
{
    public:
    void print3()
    {
        cout<<"beta called"<<endl;
    }
};

int main()
{
    Papa p;
    p.print1();

    Beti b1;
    b1.print2();
    b1.print1();

    Beta b2;
    b2.print1();
    b2.print3();

    return 0;
}