#include<iostream>
using namespace std;
int main()
{
    int n,r,m,sum=0;
    
    cout<<"Enter the number : ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);

    }
    cout<<sum;
    if(sum==m)
    {
        cout<<"\n"<<"Armstrong number";
    }
    else
        cout<<"\n"<<"not Armstrong number";
}