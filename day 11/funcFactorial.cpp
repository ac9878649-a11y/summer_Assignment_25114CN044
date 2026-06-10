#include<iostream>
using namespace std;
int fact(int a)
{
    if(a==0||a==1)
    {
        return 1;
    }
    else
    {
        int factorial=1;
        for(int i=1;i<=a;i++)
        {
            factorial=factorial*i;
        }
        return factorial;
    }
}
int main()
{
    int num;
    cout<<"enter the number ";
    cin>>num;
    cout<<"the factorial of the give number is "<<fact(num);
    return 0;
}