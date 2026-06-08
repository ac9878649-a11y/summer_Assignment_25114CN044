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
        char object='A';
        for(j=0;j<i;j++)
        {
            cout<<object;
            object++;
        }
        cout<<"\n";
    }
    return 0;
}