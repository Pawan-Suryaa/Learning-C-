//goto statement
#include<iostream>
using namespace std;
int main(){

    int n;
    input:
        cout<<"Enter Any Number Here: ";
        cin>>n;

        if (n<0){
            goto input;
            cout<<"\nThis is if condition."; //but this line wont print if the this statement will jump on input
        }

        else{
            goto output;
            cout<<"\nThis is else condition.";  //but this line wont print if the this statement will jump on input
        }    //this is outside of if statement

    output:
    cout<<"This is positive number";
    

    return 0;
}