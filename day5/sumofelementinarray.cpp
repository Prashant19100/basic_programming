#include<iostream>
using namespace std;
int main()
{
    int A[6] = {1,2,4,5,6,8};
    int sum =0;
    /*for(int i =0;i<6;i++)
    {
        sum+=A[i];
    }*/


    for (auto x:A)
    sum=sum+x;
    cout<<"Sum of the all element is = " <<sum;
}