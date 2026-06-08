#include<iostream>
using namespace std;
int main()
{
    int length;
    int i,j;
    cout<<"enter the length of the half pyramid = ";
    cin>>length;
    for(i=1;i<=length;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    return 0;
}