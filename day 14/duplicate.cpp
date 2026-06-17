#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int store[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> store[i];
    }

    cout << "Duplicate elements are: ";

    for (int i = 0; i < size; i++)
    {
        bool alreadyPrinted = false;

        // Check if this duplicate was already printed
        for (int k = 0; k < i; k++)
        {
            if (store[i] == store[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = i + 1; j < size; j++)
        {
            if (store[i] == store[j])
            {
                cout << store[i] << " ";
                break;
            }
        }
    }

    return 0;
}