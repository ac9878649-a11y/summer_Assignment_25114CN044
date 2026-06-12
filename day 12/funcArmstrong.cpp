#include<iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    if (n < 0) return false;

    int temp = n;
    int digits = 0;

    while (temp) 
    {
        digits++;
        temp /= 10;
    }

    if (n == 0) 
    digits = 1;

    temp = n;
    long long sum = 0;

    while (temp) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == n;
}

int main()
{
    int num;
    cout<<"enter the number ";
    cin>>num;
    if(isArmstrong(num))
    cout<<num<<" is a Armstrong number";
    else
    {
        cout<<num<<" is NOT a Armstrong number";
    }
    return 0;
}