#include <iostream>
using namespace std;

int sumDigits(int n)
{
    if (n == 0)
        return 0; 

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Sum of digits = " << sumDigits(number);

    return 0;
}