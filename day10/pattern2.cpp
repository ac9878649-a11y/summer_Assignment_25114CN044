#include<iostream>
using namespace std;
int main()
{
    int length;
    int j;
    cout<<"enter the length of the pyramid";
    cin>>length;
    for(int i=0;i<length;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(j=length;j>i;j--)
        {
            cout<<"*";
        }
        for(j=length-1;j>i;j--)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}