#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> ourMap;
    ourMap["abc"]=1;
    ourMap["abc1"]=2;

    ourMap["abc2"]=3;
    ourMap["abc3"]=4;
    ourMap["abc4"]=5;
    ourMap["abc5"]=6;

    //declaration for iterator
    unordered_map<string,int> ::iterator it=ourMap.begin();
    while(it!=ourMap.end())
    {
        cout<<"Key : "<<it->first<<"Value : "<<it->second<<endl;
        it++;
    }
    //find
    unordered_map<string,int>::iterator it2=ourMap.find("abc");
    ourMap.erase(it2,it2+4);

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int>::iterator it1=v.begin();
    while(it1 != v.end())
    {
        cout<< it1* <<endl;
        it1++;
    }

}
