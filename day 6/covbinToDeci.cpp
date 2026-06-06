#include <iostream>
using namespace std;

int main()
{
    int bin, deci = 0;
    cout << "Enter binary number: ";
    cin >> bin;
    int base = 1;
    while (bin != 0)
    {
        int digit = bin % 10;
        // checking correctness of input
        if (digit != 0 && digit != 1)
        {
            cout << "Invalid binary number";
            return 0;
        }
        deci += digit * base;
        base *= 2;
        bin /= 10;
    }
    cout << "Decimal = " << deci;
    return 0;
}