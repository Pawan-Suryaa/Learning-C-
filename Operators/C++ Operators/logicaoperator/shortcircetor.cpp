//Logical OR || Operator
#include <iostream>
using namespace std;

int main()
{

    int a,b,c;

    a=10;
    b=20;
    c=30;

    int d= a<b || c++;
    // 10<20 = true && 20<30 = True 
    //d= true && True = true 
                                            // if one or all value is true = True
                                            //If all result are false = false
    

                    //it search for true values if the value s true, it will skip the remaining program
                    
    cout<<d;
    cout<<"\n "<<c;

    return 0;
}