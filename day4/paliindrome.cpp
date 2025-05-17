#include<iostream>
using namespace std;
int main()
{
    int r,n,m,rev=0;
    cout<<"Enter the number : ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<rev<<"\n";
    if(m==rev)
    {
        cout<<"number is palindrome";
    }
    else
    {
        cout<<"number is not palindrome";
    }
return 0;
}