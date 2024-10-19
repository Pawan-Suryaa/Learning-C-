//relational operator for two operants, we can't use more than two in this 
#include<iostream>
using namespace std;

int main()

{

int a,b;

a=10;
b=20;

cout<<boolalpha<<"\n a > b : " <<(a>b); //false =0 (if we don't want out result in numbers --0,1 -- to we can add boolalpha once to )
cout<<"\n a < b :"<<(a<b);  //true              =1
cout<<"\n a <= b :"<<(a<=b); //true             =1
cout<<"\n a >= b :"<<(a>=b);    //false         =0
cout<<"\n a != b :"<<(a!=b);    //true
cout<<"\n a == b :"<<(a==b);    //false


return 0;
}