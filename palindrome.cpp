#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    int rev=0,count=0,key;       
    cout<<"enter the number";    
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
    if(number==rev)
    {
        cout<<"NUMBER IS A PALLINDROME";
    }
    else{
        cout<<"NUMBER IS NOT A PALLINDROME";
    }
    return 0;
}