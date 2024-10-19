//prime number
#include<iostream>
using namespace std;

int main(){

    int i, n, count=0;

    cout<<"Enter any number here: ";
    cin>>n;

    for (i=2; i<n; i++){

        if (n%2==0){
            count++;
        }
    }

    if (count==0){
        cout<<"This is prime number..";
    }

    else{
        cout<<"This is not prime number..";
    }


    return 0;
}