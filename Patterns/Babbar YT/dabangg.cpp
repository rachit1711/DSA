#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n=5;
   int i=1;
  while(i<=n){
    int j = 1;
    while(j<=n-i+1){   //print first triangle
        cout<<j;
        j = j+1;
    }
    int star = 2*(i-1);
    while(star){
        cout<<"*";    // print star triangle
        star = star - 1;
    }
    int k = n - i + 1;  // print 3rd triangle
    while(k){
        cout<<k;
        k = k-1;
    }
    cout<<endl;
    i  = i + 1;
    
  }

  return 0;

}