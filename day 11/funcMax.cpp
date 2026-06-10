#include <iostream>
using namespace std;

int max(int n1,int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
    
}

int main()
{
    int num1,num2;
    cout<<"NUMBER SHOULD BE DIFFERENT\n";
    cout<<"enter the first number ";
    cin>>num1;
    cout<<"enter the second number ";
    cin>>num2;
    cout<<"maximum number among given number is "<<max(num1,num2);
    return 0;
}