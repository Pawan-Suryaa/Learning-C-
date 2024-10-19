//sum of even digits given by user
#include<iostream>
using namespace std;

int main(){

    int n, count=0, r; // n=the number given by user, sum=the initialization of loop for the statement, r=reminder which will be executed frequently

    cout<<"Enter any number here:  ";
    cin>>n;

    while(n!=0){

        r=n%10;

            if (n%2==0){
                count++;
            }
            n=n/10;
        }
        
    
    cout<<"Number of even digits: "<<count;


    return 0;
}