#include <iostream>
using namespace std;

int main()
{
    int number;
    int fact, i, sum = 0;
    int key, term;
    cout << "Enter the number = ";
    cin >> number;
    term = number;
    while (number > 0)
    {
        key = number % 10;
        number = number / 10;
        fact = 1;  
        for (i = 1; i <= key; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
    }
    if (sum == term)
    {
        cout << term << " is a Strong Number";
    }
    else
    {
        cout << term << " is not a Strong Number";
    }
    return 0;
}