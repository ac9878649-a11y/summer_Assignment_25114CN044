#include<iostream>
using namespace std;
int main()
{
    int number1,number2;
    int key=1;
    cout<<"enter the first number";
    cin>> number1;
    cout<<"enter the secound number";
    cin>> number2;
    if(number1==0)
    {
        cout<<"HCF OF BOTH NUBER IS"<<number2;
    }
    else if(number2==0)
    {
         cout<<"HCF OF BOTH NUBER IS"<<number1;
    }
    while(number1!=number2)
    {
        if(number1>number2)
        {
            number1=number1-number2;
        }
        else
        {
            number2=number2-number1;
        }
    }
    cout<<"HCF of both number is"<<number1;
    return 0;
    
}