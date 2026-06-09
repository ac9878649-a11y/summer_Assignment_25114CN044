#include<iostream>
using namespace std;

int main()
{
    int length;
    cout<<"enter the length of the pattern";
    cin>> length;
    for(int i=0;i<length;i++)
    {
        for(int j=1;j<=length-i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}