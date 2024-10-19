//printing dimond patter
#include<iostream>
using namespace std;
int main(){

    int r,c;

    // for (r=1; r<=5; r++){ //outer loop printing increasing to decreasing order

        for (r=5; r>=1; r--){  // printing decreasing to incresing order

        for (c=5; c>r; c--){
            cout<<" "; 
        }                       //printing space

        for (c=1; c<=2*r-1; c++){

            cout<<"*";          //printing *
        }

        cout<<endl;
    }


    return 0;
}