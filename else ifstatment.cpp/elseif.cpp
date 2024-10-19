//Example else if
//a to z>>>> lower case
//Z to Z >>> Uppercase
//1 to 9 >>> Number 
//special character

#include<iostream>
using namespace std;

int main(){

    char c;

    cout<<"Enter any Character: ";
    cin>>c;

    if (c>='a' && c<='z'){

        cout<<"Lowrcase Character";
    }

    else if(c>='A' && c<='Z'){

        cout<<"Uppercase Value";
    }

    else if(c>='0' && c<='9'){

        cout<<"Number";
    }

    else{

        cout<<"Special Character";
    }

    return 0;

}