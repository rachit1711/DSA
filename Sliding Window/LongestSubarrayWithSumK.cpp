//{ Driver Code Starts
#include <bits/stdc++.h.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int i=0,j=0;
        long long sum=0;
        int maxi=0;
        while(j<N)
        {
            sum+=A[j];
            if(sum<K)
            {
                //j++ to get the desired sum value
                j++;
                
            }
            else if(sum==K)
            {
                //if we hit a desired sum value then store the maximum sized window at that time
                maxi=max(maxi,j-i+1);
                sum=0;
                j++;
            }
            else if(sum>K)
            {
                //remove the prev element to get the desired sum <=k
                while(sum>K)
                {
                    sum-=A[i];
                    i++;
                }
                
                
            }
            
        }
        j++;
        return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends