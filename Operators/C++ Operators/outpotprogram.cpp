//pre increment Operator
#include<iostream>
using namespace std;

int main ()
{
     int a,b,c;

     a=10;
     b=20;
     c=++a + ++b;

     cout<<"A= "<<a;
     
     cout<<"\nB= "<<b;

     
     cout<<"\nC= "<<c;


// c=a++ + b++;

//      cout<<"A= "<<a;
     
//      cout<<"\nB= "<<b;

     
//      cout<<"\nC= "<<c; //in case of post increment


    return 0;
}