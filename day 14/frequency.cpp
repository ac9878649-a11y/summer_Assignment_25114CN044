#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter the size of the array";
    cin>>size;

    int store[size];
    for(int i=0;i<size;i++)
    {
        cout<<"enter the element of array ";
        cin>>store[i];
    }
    int target,flag=0;
    cout<<"enter the number you want to know the frequwncy of that number = ";
    cin>>target;
    for(int j=0;j<size;j++)
    {
        if(store[j]==target)
        {
            flag++;
        } 
        else
        {
            continue;
        }    
    }               
    cout<<target<<" frequency is "<<flag;
    
    return 0;

}