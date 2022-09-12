// C++ implementation of the approach
#include <bits/stdc++.h.h>
using namespace std;

// Function to return the string after
// reversing the alternate k characters
string revAlternateK(string s, int k, int len)
{

	int l=0;
        int r=min(k,(int)s.length());
        while(l<s.length())
        {
            //reverse everything bw start and end
            reverse(s.begin()+l,s.begin()+r);
            //increment start yb 2k as we have to skip in bw k chars
            l+=2*k;
            r=min(l+k,(int)s.length());
        }
        return s;
}

// Driver code
int main()
{
	string s = "geeksforgeeks";
	int len = s.length();
	int k = 3;
	cout << revAlternateK(s, k, len);

	return 0;
}
