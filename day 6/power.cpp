#include<iostream>
using namespace std;
int main()
{
    int number;
    int power,answer=1;
    cout<<"enter the base ";
    cin>>number;
    cout<<"enter the power";
    cin>>power;
    for( int i=0;i<power;i++)
    {
        answer=answer*number;
    }
    cout<<"the answer is "<<answer;
    return 0;

}