#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, i, j, flag = 1;

    cout << "Enter order of matrix: ";
    cin >> n;

    cout << "Enter matrix elements:\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nThe matrix is:\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        cout << "\nMatrix is Symmetric.";
    else
        cout << "\nMatrix is Not Symmetric.";

    return 0;
}