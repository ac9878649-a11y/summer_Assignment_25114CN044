#include <iostream>
using namespace std;

int main()
{
    float deci, key;
    int deci2, binary = 0, binary2 = 0;

    cout << "Enter the number: ";
    cin >> deci;

    deci2 = (int)deci;
    key = deci - deci2;

    // Integer part
    while (deci2 != 0)
    {
        binary = binary * 10 + (deci2 % 2);
        deci2 /= 2;
    }

    while (binary != 0)
    {
        binary2 = binary2 * 10 + (binary % 10);
        binary /= 10;
    }

    cout << binary2 << ".";

    // Fractional part
    for (int i = 0; i < 10; i++)
    {
        key *= 2;

        if (key >= 1)
        {
            cout << 1;
            key -= 1;
        }
        else
        {
            cout << 0;
        }

        if (key < 1e-9)  
        //if(key == 0)is not reliable for floating-point numbers.
            break;
    }

    return 0;
}