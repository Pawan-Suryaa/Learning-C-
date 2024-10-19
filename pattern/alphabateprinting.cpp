//printing alphabate
#include<iostream>
using namespace std;

int main(){

    int r,c;
    char num='A';
    
    for (r=1; r<=5; r++){

        for (c=1;c<=r; c++){

            cout<<" "<<num;
            num++;

            // cout<<" "<<(char) (64+r); 
            
            // cout<<" "<<(char) (64+c);
        }   
        cout<<endl;

    }

    return 0;
}