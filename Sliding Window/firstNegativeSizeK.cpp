//gfg solution
vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        long long i;
        long long j;
        vector<long long> ans; //to store final ans
        list<long long> l; //to store -ve numbers
        while(j<N)
        {
            //traverse over the array and if an element is -ve then push into the list
            if(A[j]<0)
            {
                l.push_back(A[j]);
            }
            if(j-i+1<K) j++;
            else if((j-i+1)==K)
            {
                //do the calcs.
                //edge case 
                if(l.size()==0) ans.push_back(0);
                else
                {
                    ans.push_back(l.front());
                }
                if(A[i]==l.front())
                {
                    //encountered element is already in list of -ves
                    l.pop_front();
                }
                //finally slide the window
                i++;
                j++;
                
            }
        }
        return ans;
        }
 