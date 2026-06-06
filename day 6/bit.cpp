#include<iostream>
using namespace std;

int main()
{
    int number,bin=0,bin2=0;
    int count=0;
    cout<<"enter the number";
    cin>>number;
    while(number!=0)
    {
        bin = bin * 10 + (number % 2);
        number /= 2;
    }
    while(bin!=0)
    {
        bin2=bin2*10+bin%10;
        bin/=10;
    }
    while(bin2!=0)
    {
        int key=bin2%10;
        if(key==1)
        {
            count +=1;
        }
        bin2/=10;
    }
    cout<<"the set of bits is "<<count;
    return 0;
}

