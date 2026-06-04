#include <iostream>
using namespace std;

int main()
{
    int terms;
    int Fnum = 0, Snum = 1, next;
    cout<<"FIBONACCI SERIES AS= 0,1,1,2,3,5,8........\n";
    cout << "Enter the nth term to find: ";
    cin >> terms;
    for (int i = 0; i < terms-1; i++)
    {
        next = Fnum + Snum;
        Fnum=Snum; 
        Snum=next;
    }
    cout<<"the "<<terms<<"th term of fibonacci series is "<< Fnum;

    return 0;
}