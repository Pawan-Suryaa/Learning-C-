//Printing student information
#include<iostream>
using namespace std;

int main()
{

    string name;
    int roll;
    string enrol;
    char sec;

    cout<<"\nEnter roll number: ";
    cin>>roll;

    cout<<"\nEnter enrollment number: ";
    cin>>enrol;

    
    cin.ignore();
    cout<<"\nEnter the Name of student: ";
    cin>>name; 

    getline(cin,name);
    cout<<"\nEnter Section name: ";
    cin>>sec;


    return 0; 
}