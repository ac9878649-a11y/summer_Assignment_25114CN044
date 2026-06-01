#include<iostream>
using namespace std;
int main()
{
    int fact;
    int i,j;
    cout<<"THIS IS FOR FINDING FACTORIAL OF THE NUMBER\n";
    cout<<"enter the number";
    cin>>fact;
    j=fact;
    for(i=1;i<j;i++)
    {
        fact=i*fact;
    }
    cout<<"the factorial of the given number is="<<fact;
    return 0;

}