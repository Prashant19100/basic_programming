#include<iostream>
using namespace std;
int main()
{
    int A[5]={7,65,8,4,95};
    int key;
    cout<<"enter the key";
    cin>>key;
    for(int i=0;i<5;i++)
    {
        if(key==A[i])
            {   
                cout<<"key is at"<<i;
                exit(0);
            }
    
    }
    cout<<"element not found";
    return 0;
}