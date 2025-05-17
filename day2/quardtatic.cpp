/** this coding exercise is based on previous video*

find discriminant d=b^2-4ac ,if d=0 then roots are real and equal ,if d>0 roots are real but unequal
if d<0 then riots are imaginary

function Roots(float a ,float b, float c)
output
cout<<"real and equal "<<r1;
cout<<"real and unequal "<<r1<<" "<<r2;
cout<<"imaginary"*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2,d;
    cout<<"enter a,b,c ";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if (d==0)
    {
        r1=r2= (-b)/(2*a);
        cout<<"roots are real and equal"<<r1;
    }
    else if (d>0)
    {
        r1=((-b)+sqrt(d))/(2*a);
        r2=((-b)-sqrt(d))/(2*a);
        cout<<"roots are real and unequal "<<r1<<" "<<r2;
    }
    else
    cout<<"roots are imaginary";
}