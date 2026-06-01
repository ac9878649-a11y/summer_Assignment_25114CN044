#include<iostream>
using namespace std;
int main()
{
   int num;
   int count=0;
   cout<<"enter the number=";
   cin>> num;
   if(num==0)
   {
    count=1;
   }
   else{
   while(num!=0)
   {
      num=num/10;
      count=count+1;
   }
   }
   cout<<"No. of digits are = "<<count;
   return 0;

    
}