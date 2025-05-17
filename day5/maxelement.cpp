#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int A[5] = {-5,-6,-8,-9,-4};
    int min=INT_MAX;
    for (auto x:A)
    {
        if(x<min)
        min=x;
        
    }
    cout<<"Minimum number is = "<< min;
}