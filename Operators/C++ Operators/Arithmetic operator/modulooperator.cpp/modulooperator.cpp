//writing a code of Modulo operator (%)) of the Arithemetic Operator by finding the last value of any digit
#include<iostream>
using namespace std;

int main ()
{
    int n,last;

    cout<<"Enter any number: ";
    cin>>n;

    last=n%10;

    cout<<"the last digit of number is: "<<last;



    return 0;
}