//post Increment Operator
#include<iostream>
using namespace std;

int main ()
{
     int a,b,c,d;

     a=10;
     b=20;

     cout<<"Before post Increment: "<<"A= "<<a<<" B= "<<b;

     c=a++;
     d=b++;

     cout<<"\nAfter post Increment: "<<" A= "<<a<<" B= "<<b;

     cout<<"\nafter post Increment: "<<" C= "<<c<<" D= "<<d;

    return 0;
}