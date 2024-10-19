//right to left loop printing
#include<iostream>
using namespace std;

int main(){

    int r,c;

    for(r=1;r<=5; r++){ //outer loop
        
        for(c=5; c>r; c--){ //iner loop1
            
            cout<<" ";
        }//print namespace

        for(c=1;c<=r; c++){ //inner loop 2
            cout<<"*";
        }//print star *

        cout<<endl;
    }

    return 0;
}
