#include <iostream>
#include <math.h>
using namespace std;
int main() {
   int n=-6;
   //cout<<"Enter any number: ";
   //cin>> n;
   int i = 0;
   int ans= 0;
   if(n<0){
    n= n*-1;
     while(n!=0){
       int bit = n&1;
       if(bit == 1 ){
         ans =(0 *pow(10,i))+ans;
       }
       else {
         ans = (1 *pow(10,i))+ans;
       }
       n= n >>1;
       i++;
   }
   }
cout<<"Ans: "<<ans+1 ; 
}