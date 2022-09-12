#include<bits/stdc++.h.h>
using namespace std;
void NGELeft(vector<int> &vec)
{
    int size=vec.size();
    stack <int> s;
  	vector<int> ans;
  	for(int i = 0; i < size; i++){
    	if(s.empty()){
          	s.push(vec[i]);
        	ans.push_back(-1);
        } else if(s.top() > vec[i]){
            ans.push_back(s.top());
            s.push(vec[i]);
        }else{
        	while(!s.empty()){
            	if(s.top() > vec[i]){
                  	ans.push_back(s.top());
            		s.push(vec[i]);
                  	break;
                }
              	s.pop();
            }
          	if(s.empty()){
              	s.push(vec[i]);
            	ans.push_back(-1);
            }
        }
    }
  	//reverse(ans.begin(), ans.end());
  	vec = ans;
}
    
int main() {
	vector<int> vec = {1,3,2,4};
  	NGELeft(vec);
  	for(auto num:vec) cout<<num<<" ";
    return 0;
    }