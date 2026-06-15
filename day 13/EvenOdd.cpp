#include<iostream>
using namespace std;
int main()
{
    int size,evenCount=0,oddCount=0;
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
       if(value[j]%2==0)
       evenCount ++;
       else
       oddCount ++;

    } 
     cout<<"Total number of even number is "<<evenCount<<"\n" ;
     cout<<"Total number of odd number is "<<oddCount;
     return 0; 

}