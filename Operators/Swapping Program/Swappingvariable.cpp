//Writing Program to swap two numbers using third variable
#include<iostream>
using namespace std;

int main()

{
    int a,b,c;

    a=9;
    b=7;

    cout<<"\tBefore Swapping "<<endl;
    cout<<"\ta=  "<<a<<"\tb= "<<b;

    c=a;
    a=b;
    b=c;

    cout <<endl<<"\tafter Swapping "<<endl;
    cout<<"\ta= "<<a<<"\tb= "<<b;

    return 0;
}