//printing table of any number
#include<iostream>
using namespace std;
int main(){

    int i,n;
    cout<<"Enter any number: ";
    cin>>i;

    n=1;

    while (n<=10){

        cout<<endl<< i<<"*" <<n<< "=" << (i*n);
    
    n++;
    }



    
    
    return 0;
}