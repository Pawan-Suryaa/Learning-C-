//printing numbers in ordered llist
#include<iostream>
using namespace std;

int main(){

    int r, c, num=1;

    for(r=1; r<=5; r++){

        for(c=1; c<=r; c++){

                cout<<" "<<num;
                num++;

            }
        
        
        cout<<endl;
        
    }


    return 0;
}