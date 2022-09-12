// C++ program for insertion sort
  
#include <bits/stdc++.h.h>
using namespace std;
  
// Function to sort an array using 
// insertion sort
void insertionSort(int arr[],int n)
{
    int i,j;
    int current;
    for(int i=1;i<n;i++)
    {
        current=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>current)
        {
            //move bigger elements by one index forward
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=current;
    }
}
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl;
} 
// Driver code
int main() 
{ 
    int arr[] = { 12, 11, 13, 5, 6 }; 
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    insertionSort(arr, N); 
    printArray(arr, N); 
  
    return 0; 
} 