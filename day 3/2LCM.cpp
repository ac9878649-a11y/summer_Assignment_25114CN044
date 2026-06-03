#include<iostream>
using namespace std;
int main()
{
    int number1,number2;
    int maxnum,key=1;
    cout<<"enter the first number";
    cin>> number1;
    cout<<"enter the secound number";
    cin>> number2;
    maxnum=(number1>number2)?number1:number2;
    while(key)//INFINTE LOOP EXECUTES HERE
    {
        if(maxnum%number1==0 && maxnum%number2==0)
        {
            cout<<"LCM of "<<number1<<" and "<<number2 <<" is = "<<maxnum;
            break;
        }
        maxnum=maxnum+1;
    }
    return 0;

}