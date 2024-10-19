//Bitwise Right Shift (>>) Opertor
#include<iostream>
using namespace std;

int main()
{
    int x,y;

    //x=8;
    x=5; //in case of float number it will give you lower value (flor value)
    y=x>>1;

    cout<<"The Result of Bitwise Left Shift (<<) Operator: "<<y; //n/2=for one shift = 8/2 =4
    cout<<"\n"<< (x>>2);   //n/2=two one shift = 4/2 =2
    cout<<"\n"<< (x>>3);
    cout<<"\n"<< (x>>4);



    return 0;
}