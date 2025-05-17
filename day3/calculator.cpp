#include<iostream>
using namespace std;
int main()
{
    cout<<"Menu\n";
    cout<<"1.Add\n2.Sub\n3.Mul\n4.Div\n";
    cout<<"Choose the your option : ";
    int option,a,b,c;
    cin>>option;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    switch(option)
    {
        case 1: c=a+b;
            break;
        case 2: c=a-b;
            break;
        case 3: c=a*b;
            break;
        case 4: c=a/b;
            break; 
        default : cout<<"Invalid option";
    }
    cout<<"Result="<<c<<endl;
}