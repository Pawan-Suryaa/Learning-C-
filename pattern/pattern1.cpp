//pattern 1 //with increment

#include<iostream>
using namespace std;

int main(){

    int r,c; //r==row, c==colum

    // for(r=1; r<=5; r++){ //outer loop 1,2,3,4,5,6   (increment )
    for(r=5; r>=1;  r--){ //decrement loop
        for (c=1;c<=5; c++){ //internal loop
            cout<<"*";
        }

        cout<<endl; //line change
    }
    
    return 0;
}
