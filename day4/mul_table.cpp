#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cout<<"enter the number you want for multiplication table : ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    }
}