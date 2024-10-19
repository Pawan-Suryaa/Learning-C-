//write a c++ program to check given number is negative or positive
#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"Enter any number: ";
    cin>>num;

    if(num>0){

        cout<<"This is positive number.";
    }

    else{
        cout<<"This is negative number..";
    }
    return 0;
}