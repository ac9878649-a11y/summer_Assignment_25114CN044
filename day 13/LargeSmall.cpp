#include<iostream>
using namespace std;
int main()
{
    int size,large = INT16_MIN,small=INT16_MAX;
    cout<<"enter the size of the array";
    cin>>size;
    int value[size];
    cout<<"enter the values of the array = ";
    for( int i=0;i<size;i++)
    {
        cin>>value[i];
    }
   
    for( int j=0;j<size;j++)
    {
        if(value[j]<small)
        small=value[j];
        if(value[j]>large)
        large=value[j];

    } 
     cout<<"smallest element in this array ="<<small<<"\n" ;
     cout <<"largest value in this array = "<<large;

     return 0; 

}