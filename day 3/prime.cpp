#include<iostream>
using namespace std;
int main()
{
    int number;
    int i,count=0;
    cout<<"enter the number";
    cin>> number;
    if(number<=1)
    {
      cout<<number<<" is neither a prime or composite";
    }
    else
    {
        for(i=1;i<=number/2;i++)
        {
            if(number%i==0)
            {
                count++;
            }
        }
        if(count>2)
        {
            cout<<number<<" is not a prime number";
        }
        else
        {
            cout<<number<<" is a prime number";
        }
    }
    return 0;
}