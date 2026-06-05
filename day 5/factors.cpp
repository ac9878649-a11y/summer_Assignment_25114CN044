#include<iostream>
using namespace std;
int main()
{
    int number;
    int i;
    cout<<"type the number = ";
    cin>>number;
    cout<<"the factors of "<<number<<" is ";
    for(i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            cout<<i<<",";
        }
    }
    return 0;

}