//Write a C++ Program to check given number is even or odd using if else
#include<iostream>
using namespace std;

int main(){

    int num;

     cout<<"Enter any number: ";
     cin>>num;

     if(num%2==0){

        cout<<"This number is even";
     }

     else{

        cout<<"This number is odd";
     }

    return 0;
}