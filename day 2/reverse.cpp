#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    int rev=0,count=0,key;       //we cannot declare her as key = number
    cout<<"enter the number";    // as number is not declare so it will take some garbage value
    cin>>number;
    key=number;
    while(number!=0)
    {
        number=number/10;
        count=count+1;
    }
    number=key;
    while(number!=0)
    {
        rev=rev+(number%10*round((pow(10,count-1))));
        count=count-1;
        number=number/10;
    }
    number=key;
    cout<<"reverse of "<<key<<"="<<rev;
    return 0;
}