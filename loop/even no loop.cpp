//printing even number 
#include<iostream>
using namespace std;

int main(){
    
    int n;
    n=10;
    
    do{
        if(n%2==0){
            cout<<endl<<n;
        }
        
        n++;
        
    }
    
        while (n<=20);
    
    return 0;
}