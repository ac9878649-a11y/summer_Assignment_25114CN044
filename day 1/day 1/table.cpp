#include<iostream>
using namespace std;
int main()
{
   int num;
   int times;
   int i;
   cout<<"enter the number";
   cin>>num;
   cout<<"enter the times you want to multiply";
   cin>>times;
   for(i=0;i<=times;i++)
   {
    cout << num << " x " << i << " = " << num * i <<"\n" ;
   }

   return 0;

    
}