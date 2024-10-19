//Logical Not (!) Operator
#include <iostream>
using namespace std;

int main()
{

    int a,b,c;

    a=10;
    b=20;
    c=30;

    bool d= !(a<b || b<c);
    // 10<20 = true && 20>30 = True
    //d= true && True = true 
    //Not Operator will change True== False
                                            // if one or all value is true = True
                                            //If all result are false = false
    
    cout<<boolalpha<<d;

    return 0;
}