#include<bits/stdc++.h.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0,ans=0;

    while(n!=0)
    {
        int digit=n%10;
        if(digit==1)
        {
            ans+=pow(2,i);
        }
        n=n/10;
        i++;
    }
    return ans;
}



 int ans = 0;
        ListNode* temp = head;
        while(temp != NULL){
            ans = ans * 2;
            ans = temp->val + ans;
            temp = temp->next;
        }
        return ans;