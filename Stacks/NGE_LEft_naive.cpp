#include<bits/stdc++.h.h>
using namespace std;
void NGELeft(vector<int> &vec)
{
    vector<int> ans;
    int size=vec.size();
    for(int i=0;i<size;i++)
    {
        int flag=0;
        for(int j=0;j<i;j++)
        {
            if(vec[j]>vec[i])
            {
                ans.push_back(vec[j]);
                flag=1;
                break;
            }
        }
        if(flag==0) ans.push_back(-1);
    
    }
    vec=ans;


}
int main() {
	vector<int> vec = {1,3,2,4};
  	NGELeft(vec);
  	for(auto num:vec) cout<<num<<" ";
    return 0;
}