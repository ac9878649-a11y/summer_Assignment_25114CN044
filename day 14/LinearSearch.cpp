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
    int target,flag=0,index;
    cout<<"enter the number you want to find = ";
    cin>>target;
    for(int j=0;j<size;j++)
    {
        if(store[j]==target)
        {
            flag++;
        index=j;
        break;
        } 
        else
        {
            continue;
        }

        
    }               
    
    if(flag==1)
    {
        cout<<target<<" is found at "<< index;
    }
    else
    cout<<target<<" not found";
    
    return 0;

}