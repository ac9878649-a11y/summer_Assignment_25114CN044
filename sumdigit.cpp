#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum=0,key;
    cout<<"enter the number";
    cin>>number;
    while(number!=0)
    {
        key=number%10;
        sum=sum+key;
        number=number/10;
    }
    cout<<"the sum of the digits of given number is = "<<sum;
    return 0;


}
