//counting number of digit given by user
#include <iostream>
using namespace std;

int main(){

    int n, count=0;

    cout<<"Enter any number here: ";
    cin>>n;

    while(n!=0){ //n=123456  , count=0

        n=n/10;
        count++;
    }

    cout<<"The number of digits are: "<<count;





    return 0;
}