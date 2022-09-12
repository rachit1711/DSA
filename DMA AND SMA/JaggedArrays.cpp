#include<iostream>
using namespace std;
int main()
{

    int rows;
    cin>>rows;
    int *numbers=new int[rows]; //to store no of columns in each rows
    int** array=new int*[rows]; //jagged array

    for(int i=0;i<rows;i++)
    {
        cout<<"Enter the number of columns in  row"<<i<<endl;
        cin>>numbers[i];
        array[i]=new int[numbers[i]];


    }
    //taking input
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<numbers[i];j++)
        {
            //important 
            cout<<"Row "<<i<<":-Enter value "<<i*numbers[i]+j<<": ";
            cin>>array[i][j];

        }
    }
    //output values
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<numbers[i];j++)
        {
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}