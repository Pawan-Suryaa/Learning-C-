//write a c++ program to know even or odd number
#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter any number:";
    cin>>num;

    if (num%2==0){

        cout<<"\nThe number is even";
    
    }

    if (num%2!=0){

        cout<<"\nThe number is odd";
    }


    return 0;
}