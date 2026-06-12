#include<iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1)
        return n;

    long long a = 0, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int num;
    cout<<"enter the number ";
    cin>>num;
    cout<<fibonacci(num);
    return 0;
}