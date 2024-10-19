//Logical AND && Operator
#include <iostream>
using namespace std;

int main()
{

    int a,b,c;

    a=10;
    b=20;
    c=30;

    int d= a>b && b< ++c;
    // 10<20 = true && 31 (any number above 1 represets true means 31 = 1) = True
    //d= true && True = true 

//if search for false value. if the value os false than it ski the remaining program
    
    cout<<d;
    cout<<"\n"<<c;

    return 0;
}