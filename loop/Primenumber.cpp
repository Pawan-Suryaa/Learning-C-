//check prime number
#include<iostream>
using namespace std;

int main(){

    int n,i, count=0;

    cout<<"Enter Any Number Here:  ";
    cin>>n;

    for(i=1; i<=n; i++){
        if (n%i==0){
            count++;
        }
    }

    if (count==2){
        cout<<"This is Prime Number...";
    }

    else{
        cout<<"This is not a Prime Number..";

    }


    return 0;
}