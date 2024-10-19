//identifing perfect number
#include<iostream>
using namespace std;
int main(){
    
    int n, sum=0, i;
    
    cout<<"Enter any Number: ";
    cin>>n;
    
    for(i=1; i<n; i++) //n=6
    {
        
        if (n%i==0){
            sum=sum+i;
            }
        
    }
        
        if (n == sum){
            cout<<"This is perfect number.";
        }
        
        else{
            cout<<"This is not a perfect number.";
        }
    
    
    return 0; 
}