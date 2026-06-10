#include<iostream>
using namespace std;
int main()
{
    int length;
    char num1='A';
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
            cout<< num1;
            num1++;
        }
        for(int j=0;j<i;j++)
        {
            num1=num1-2;
            cout<<num1;
            num1++;
            
        }
        num1='A';
        cout<<"\n";
    }
    return 0;
}