    //Nested if
    #include<iostream>
    using namespace std;

    int main(){

        char c;

        cout<<"Enter any character: ";
        cin>>c;

        if (c>='a'){

            if(c<='z'){
                       cout<<"This is Lowercase character.";
            }
            
        }

        else if (c>='A'){

            if(c<='Z'){

                cout<<"This is Uppercase Character";
            }


        }

        return 0;

    }