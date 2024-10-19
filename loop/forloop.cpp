//for loop
#include<iostream>
using namespace std;

int main(){

    // int x;

    // for (x=1; x<=5; x++){
    //     cout<<endl<<x;
    // }

    

    // // for (int x=5; x>=1; x--){
    // //     cout<<endl<<x;
    // // }

    // int x;          //for even or odd number identifier

    // for(x=100; x<=150; x++ ){

    //     if (x%3==0){
    //         cout<<endl<<x;
    //     }
    // }
    
    // return 0;

    int n, x;
    
    cout<<"Enter any number here: ";
    cin>>x;

    for(n=1;n<=10; n++){

        cout<<endl<<x<<"*"<<n<<"="<<(n*x);
    }

}
