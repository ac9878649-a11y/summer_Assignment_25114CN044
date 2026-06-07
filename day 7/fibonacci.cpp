#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0) 
    return 0;

    if (n == 1) 
    return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int number;
    cout << "Enter nunber: ";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        cout << fib(i) << " ";
    }

    return 0;
}