#include<iostream>
using namespace std;

int main()
{
    int length;
    cout<<"enter the length of the pattern";
    cin>> length;
    for(int i=0;i<length;i++)
    {
        for(int j=i;j<length;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}