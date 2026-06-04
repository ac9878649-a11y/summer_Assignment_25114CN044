#include <iostream>
using namespace std;

int main()
{
    int terms;
    int Fnum = 0, Snum = 1, next;
    cout << "Enter the number of terms: ";
    cin >> terms;
    cout << "The Fibonacci series is: ";
    for (int i = 0; i < terms; i++)
    {
        cout << Fnum;
        if (i != terms - 1)
            cout << ",";
        next = Fnum + Snum;
        Fnum=Snum; 
        Snum=next;
    }

    return 0;
}