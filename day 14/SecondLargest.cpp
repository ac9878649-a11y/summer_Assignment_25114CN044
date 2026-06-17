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
    if (size < 2)
    {   cout<<"size of array  should be greater than 2";
        return 0;
    }
    int second_largest=INT16_MIN,largest=INT16_MIN;
    for(int j=0;j<size;j++)
    {
        if (store[j]>largest)
        {
            second_largest=largest;
            largest=store[j];
        }
        else if(store[j]>second_largest && store[j]!=largest)
            second_largest=store[j];

    }
    cout<<"the secound largest number in array is "<<second_largest;

    return 0;

}