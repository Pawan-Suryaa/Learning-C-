//pattern 2

#include<iostream>
using namespace std;
int main(){

    int r, c;
    // for (r=1;r<=5; r++){
    //     for(c=1;c<=r;c++){
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }


     for (r=5;r>=1; r--){
        for(c=1;c<=r;c++){
            cout<<"*";
        }

        cout<<endl;
    }


    return 0;
}
