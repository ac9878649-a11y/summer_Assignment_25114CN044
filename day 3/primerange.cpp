#include <iostream>
using namespace std;
int main()
{
    int strrange, endrange;
    int i, j, count;
    cout << "Enter the starting number: ";
    cin >> strrange;
    cout << "Enter the ending number: ";
    cin >> endrange;
    cout << "Prime numbers between " << strrange << " and " << endrange << " are:\n";
    for (i = strrange; i <= endrange; i++)
    {
        if (i <= 1)
            continue;
        count = 0; // Reset count for each number
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}