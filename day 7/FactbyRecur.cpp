#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;   
    return n * fact(n - 1);
}

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    cout << "The factorial is " << fact(number);

    return 0;
}