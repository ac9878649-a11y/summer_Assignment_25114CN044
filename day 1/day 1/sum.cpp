#include<iostream>
using namespace std;
int main()
{
    int num; //here n is a variable in which input is stored
    int sum;
    cout<<"THIS PROGRAM IS FOR SUM OF NATURAL NUMBERTS\n";
    cout<<"enter the last natural number till you want sum =";
    cin>> num;
    sum=(num*(num+1))/2;
    cout<<"the sum of "<<num;
    cout<<" natuarl number is ="<<sum;
    return 0;


}