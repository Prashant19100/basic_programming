#include<iostream>
using namespace std;
int main()
{

    int m,n;
    cout<<"Enter the two numbers : ";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
        
    }
    cout<<"GCD of the two numbers is"<<m;
    return 0;
}