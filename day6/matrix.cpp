#include<iostream>
using namespace std;
int main()
{
    int A[2][3]={1,2,3,5,6,4};
    int B[2][3]={5,2,3,6,8,9};
    int C[2][3];
    for (int i=0;i<2;i++) 
    {
        for(int j=0;j<3;j++)
        { C[i][j]=A[i][j]+B[i][j];
        }
    }
     cout<<"The sum of the elements in Matrix A and Matrix B is : " << endl ;
      for (int i=0; i<2; i++ )   // Displaying Elements Of The Resultant Matrix.
       {for  (int j = 0 ; j < 3 ; j++ )    
         {cout<<C[i][j]<<" ";
         }
            cout<<endl;
       }
 return 0;
}
   