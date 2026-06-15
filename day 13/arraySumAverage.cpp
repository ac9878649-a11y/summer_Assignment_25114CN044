#include<iostream>
using namespace std;
int main()
{
    int size,sum=0;
    cout<<"enter the size of the array ";
    cin>>size;
    int value[size];
    cout<<"enter the values of the array = ";
    for( int i=0;i<size;i++)
    {
        cin>>value[i];
    }
    for( int j=0;j<size;j++)
    {
        sum += value[j];
    } 
     cout<<"sum of the array is "<<sum<<" \n";
     cout<<"average of the array is "<<sum/size;
     return 0; 

}