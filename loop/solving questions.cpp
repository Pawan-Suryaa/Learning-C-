//calculating factorial 
#include<iostream>
using namespace std;

int main(){

    int n, fact=1, i;

    // cout<<"Enter any Number: ";  
    // cin>>n; //5

    // for(i=1; i<=n; i++){

    //     fact=fact*i;
    // }
    //     cout<<"The factorial of "<< n <<" is "<< fact;

    cout<<"Enter any Number: ";
    cin>>n; //5

    for(i=n; i>=1; i--){

        fact=fact*i;
    }
        cout<<"The factorial of "<< n <<" is "<< fact;


    return 0;
}