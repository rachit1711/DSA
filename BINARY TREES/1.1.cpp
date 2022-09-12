#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i=1;
    int j=1;
    for(; ;)
    {
        if(i>5)
            break;
        else
            j+=i--;
        printf("%d\n",j);
        i+=j;
        j=j+7;
    }
    
    return 0;
}