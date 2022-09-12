#include<iostream>
#include<map> //O(log n) //order of elements is reserved
#include<unordered_map> //O(1) //order of elements is not reserved


using namespace std;
int main()
{
    //creation 
    unordered_map<string,int> m;

    //insertion 
    //way 1
    pair<string,int>p =make_pair("rachit",4);
    m.insert(p);
    //way 2
    pair<string,int> pair2("narang",5);
    m.insert(pair2);

    //way 3
    m["my"]=1;


    //Searching
    cout<<m["my"]<<endl;

    cout<<m.at("narang")<<endl;


    //NOTE------------------------------------***
   // cout<<m.at("unknownkey")<<endl;  //error as it is not inserted yet 
    cout<<m["unknownkey"]<<endl; //will op 0 as it is inserted by default

    cout<<m.size()<<endl; //size

    //to check presence of  key 
    cout<<m.count("bro")<<endl;
    cout<<m.count("rachit")<<endl;

    //erase
    m.erase("rachit");
    cout<<m.size()<<endl;


    //access each element
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    //using iterator
    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;

}