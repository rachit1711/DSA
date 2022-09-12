#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int> ourMap;
    //insert 
    pair<string,int> p("abc",1);
    ourMap.insert(p);
    ourMap["def"]=2;

    //find or access elements
    cout<<ourMap["abc"]<<endl;
    cout<<ourMap.at("abc")<<endl;

    //incase we donot have a key defined and we try to access that will insert default value 0 to it and return that value
    cout<<"Size : "<<ourMap.size()<<endl;
    cout<<ourMap["ghi"]<<endl;

    //check presence of a key
    if(ourMap.count("ghi")>0)
    {
        cout<<"ghi is present "<<endl;
    }

    //erase an element
    ourMap.erase("ghi");
    if(ourMap.count("ghi")>0)
    {
        cout<<"ghi is present "<<endl;
    }
    return 0;
}
