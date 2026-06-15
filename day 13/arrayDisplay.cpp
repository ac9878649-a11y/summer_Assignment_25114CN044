#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array";
    cin>>size;
    int value[size];
    cout<<"enter the values of the array = ";
    for( int i=0;i<size;i++)
    {
        cin>>value[i];
    }
    cout<<"your array = [";
     for( int j=0;j<size;j++)
     {
        cout<<value[j]<<" ";

     } 
     cout<<"]" ;
     return 0; 

}