#include<iostream>
using namespace std;
int main()
{
    int number;
    int i,sumfactor=0;
    cout<<"type the number = ";
    cin>>number;
    for(i=1;i<number;i++)
    {
        if(number%i==0)
        {
            sumfactor=sumfactor+i;
        }

    }
     if(sumfactor==number)
        {
            cout<< number<<" is a perfect number";
        }
        else{
            cout<<number<<" is not a perfect number";
        }
    return 0;

}