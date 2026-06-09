#include<iostream>
using namespace std;

int main()
{
    int length;
    char A;
    cout<<"enter the length of the pattern";
    cin>> length;
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<char('A'+i);
            
        }
        cout<<"\n";
    }
    return 0;
}