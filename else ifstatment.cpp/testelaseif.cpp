//Else if example 
#include<iostream>
using namespace std;

int main(){
    char c;

    cout<<"Enter any Character: ";
    cin>>c;

    // if (c>='a' && c<='z'){
    //     cout<<"This is small Character.";
    // }

    // else if (c>='A' && c<='Z'){

    //     cout<<"This is Capital Character";
    // }

    // else if (c>='0' && c<='9'){
    //     cout<<"This is digit Value.";
    // }

    // else{

    //     cout<<"This is special character.";
    // }


if (c=='a'|| c== 'e' || c== 'i' || c== 'o' || c== 'u' || c=='A'|| c== 'E' || c== 'I' || c== 'O' || c== 'U'  ){
    cout<<"This is Vowel.";
}

else{

    cout<<"This is not a vowel.";
}

    return 0;
}