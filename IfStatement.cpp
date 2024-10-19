//Write a c++ program to compare two numbers
#include<iostream>
using namespace std;

int main ()
{   

    int n1,n2;

   cout<<"Enter 1st Value: ";
   cin>>n1;

   cout<<"Enter 2nd Value: ";
   cin>>n2;

    if(n1>n2){
        cout<<"\nNumber 1st is Greater ";
        cout<<"\nThis is if 1st statement";
    }

    if(n1<n2){
        cout<<"\nNumber 2nd is Greater ";
        cout<<"\nThis is if 2nd statement";
    }

    if(n1==n2){
        cout<<"\n Number 1st and 2nd are Equal";
        cout<<"\n This is if 3 rd statement";
    }

    return 0;
}