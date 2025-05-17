#include<iostream>
using namespace std;
int main()
{
    int n,i=1,fact=1;
    cout<<"Enter a number = ";
    cin>>n;
    for(;i<=n;i++)
    {
        fact*=i;
        
    }
    cout<<fact;
    
}
