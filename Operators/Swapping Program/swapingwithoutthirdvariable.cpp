//Writing Program to swap two numbers without using third variable with arithmetic operators (+-)
#include<iostream>
using namespace std;

int main()

{
    int a,b;

    a=9;
    b=7;

    cout<<"\tBefore Swapping";
    cout<<endl<<"\ta= "<<a<<"\tb= "<<b;
    
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<endl<<endl<<"\tAfter Swapping";
    cout<<endl<<"\ta= "<< a <<"\tb= "<<b;

    return 0;
}