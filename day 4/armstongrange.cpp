#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int start, end;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";
    for (int num = start; num <= end; num++)
    {
        int originalNum = num;
        int digits = 0;
        int result = 0;
        int temp = num;
        if (temp == 0)
            digits = 1;
        else
        {
            while (temp != 0)
            {
                digits++;
                temp /= 10;
            }
        }
        temp = num;
        while (temp != 0)
        {
            int remainder = temp % 10;
            result += round(pow(remainder, digits));
            temp /= 10;
        }
        if (result == originalNum)
            cout << originalNum << " ";
    }
    return 0;
}