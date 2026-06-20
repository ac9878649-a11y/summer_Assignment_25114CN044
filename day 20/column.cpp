#include <iostream>
using namespace std;

int main()
{
    int a[10][10], r, c, i, j, sum;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix elements:\n";
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nThe matrix is:\n";
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nColumn-wise Sum:\n";
    for(j = 0; j < c; j++)
    {
        sum = 0;
        for(i = 0; i < r; i++)
        {
            sum += a[i][j];
        }
        cout << "Sum of Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}