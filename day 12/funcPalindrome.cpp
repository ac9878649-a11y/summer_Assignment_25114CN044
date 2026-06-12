#include<iostream>
using namespace std;

bool isPalindrome(int x) 
{
    if (x < 0) 
    return false;
    if (x != 0 && x % 10 == 0) 
    return false;

    int rev = 0;

    while (x > rev) 
    {
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return x == rev || x == rev / 10;
}

int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    if(isPalindrome(num))
    {
        cout<<num<<" is a palindrome";
    }
    else
    {
        cout<<num<<" is not a palindrome";
    }
    return 0;
}
