//reversing the given number
#include<iostream>
using namespace std;

int main(){

    int n, reverse=0, r;

    cout<<"Enter any number: ";
    cin>>n;

    while (n!=0){

        r=n%10;

        reverse=reverse*10+r;
        n=n/10;
    }

    cout<<"Reverse number is: "<<reverse;


    return 0;
}