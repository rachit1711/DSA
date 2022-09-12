#include<bits/stdc++.h>
using namespace std;
int totalSubsets=0;

void printSubset(vector<int> input ,vector<int> output,int index)
{
    //base case
    if(index>=input.size())
    {
        //we need to print the array
        for(auto i:output)
        {
            cout<<i<<" ";
        }cout<<endl;
        //finally return
        totalSubsets++; 
        return ;
    }

    //we have 2 options for each element either to take it or not

    //when include
    output.push_back(input[index]);
    printSubset(input,output,index+1);

    //when not including
    printSubset(input,output,index+1);

}
int main()
{
    int size;
   cout<<"Enter the size of the array"<<endl;
   cin>>size;
   vector<int> vec(size);
   vector<int> subset;
   cout<<"Enter the elements "<<endl;
   for(int i=0;i<size;i++)
   {
       cin>>vec[i];
   }
   cout<<"Power set is : "<<endl;
   printSubset(vec,subset,0);
   cout<<"total subsets are"<<totalSubsets;
   return 0;

}

