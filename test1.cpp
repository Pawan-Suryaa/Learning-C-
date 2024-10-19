//if statement in c++ programming
#include<iostream>
using namespace std;

int main()
{
    int n1, n2;

    cout<<"Enter the value of n1: ";
    cin>>n1;

    cout<<"Enter the value of n2: ";
    cin>>n2;

    if (n1>=n2){
    cout<<"\nNumber 1 is greater than Number 2";
    cout<<"\nThis is if 1";
    }

    
    if (n1<=n2){
    cout<<"\nNumber 1 is less than Number 2";
    cout<<"\nThis is if 2";
    }
    
    if (n1==n2){
    cout<<"\nNumber 1 an Number 2 are equal";
    cout<<"\nThis is if 3";
    }


    return 0;
}