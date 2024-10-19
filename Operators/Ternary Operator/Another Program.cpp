//Ternary Operator in C++ for Printing Even and Odd number
#include <iostream>
using namespace std;

int main ()
{
    int n;

    cout<<"Enter Any Number: ";
    cin>>n;



    n%2==0 ? cout <<"This  is Even Number " : cout<< "This is Odd Number"; //for performing even function
   // n%2!=0 ? cout <<"This  is Even Number " : cout<< "This is Odd Number"; //for performing not equal (Odd) function


    return 0;

}