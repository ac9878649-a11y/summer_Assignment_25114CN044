#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return(a+b);
}
int main()
{
    int num1,num2;
    cout<<"enter the first number";
    cin>>num1;
    cout<<"enter the secound number";
    cin>>num2;
    cout<<"the sum of two numbers are "<<sum(num1,num2);
    return 0;
}