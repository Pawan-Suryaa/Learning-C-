//Exit 
#include<iostream>
using namespace std;
int main(){

    int n,i; // n=for number where we take input from user   , i=for initializing the loop
    int t1=0, t2=1;
    int t3=t1+t2;

    cout<<"Enter any number here: ";
    cin>>n;
    
    cout<<"Fibonacchi Series: "<<  " " <<t1<< " "<<t2;
    for(i=3; i<=n; i++){

        cout<<" "<<t3;

        t1=t2;
        t2=t3;
        t3=t1+t2;
    }


    return 0;
}