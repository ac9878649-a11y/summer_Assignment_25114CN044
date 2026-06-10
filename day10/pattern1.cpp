#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<<"enter the length of the pyramid";
    cin>>length;
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length-i-1;j++)
        {
            cout<<" ";
        }
        for(int k=length-i-1;k<length;k++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}