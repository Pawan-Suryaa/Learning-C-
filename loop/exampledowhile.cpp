//table
#include<iostream>
using namespace std;
int main(){

    int x; //number that user will give for table
    int n; //variable for loop
    cout<<"Enter any number here: ";
    cin>>x;

    n=1; //initializing the loop
    do{
        cout<<endl<<x<<"*"<<n<<"="<<(x*n);

        n++;
    } while (n<=10);



    return 0;
}