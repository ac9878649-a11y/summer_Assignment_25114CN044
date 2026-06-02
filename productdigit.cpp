#include <iostream>
using namespace std;
int main()
{
    int number;
    int product=1,key;
    cout<<"enter the number";
    cin>>number;
    while(number!=0)
    {
        key=number%10;
        product=product*key;
        number=number/10;
    }
    cout<<"the product of the digits of given number is = "<<product;
    return 0;


}
