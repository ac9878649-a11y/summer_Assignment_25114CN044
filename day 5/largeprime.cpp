#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int largest = 1;
    for(int i = 2; i <= num; i++)
    {
        while(num % i == 0)
        {
            largest = i;
            num = num / i;
        }
    }
    cout << "Largest Prime Factor = " << largest;
    return 0;
}