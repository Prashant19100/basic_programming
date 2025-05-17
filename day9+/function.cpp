/* #include<iostream>
using namespace std;

void display()
{
    cout << "Hello World!" << endl;
}

int main()
{
    display();
    return 0;
} */

/* #include<iostream>
using namespace std;

float add(float a, float b)
{
    float c;
    c=a+b;
    return c;
}

int main()
{
    float x =5.5,y = 8.5;
    float z = add(x, y);
    cout<<z<<endl;
    return 0;
} */



/* #include <iostream>
using namespace std;

int max(int  a =0 , int b = 0, int c =0 ) 
{
    return a>b && a>c ? a: b>c? b : c;
}

int main()
{
    cout<<max(55,565,85)<<endl;
    cout<<max(55)<<endl;
    cout<<max(55,565)<<endl;
    cout<<max()<<endl;
    return 0;
    
} */

//Demo for the static variable

#include<iostream>
using namespace std;

void fun()
{
    static int s=10; //static variable will be initialized only once and it's value remains same in all function calls
    s++;
    cout<<s<<endl;

}
int main()
{

    fun();
    fun();
    fun();

}