#include <iostream>
using namespace std;

class Your;
class My
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend Your; // to access all the member of My class , define your  own class and make it as friend.
};

class Your
{
public:
    My m;
    void fun()
    {
        m.a = 10;
        m.b = 10;
        m.c = 10;
    }
};

int main()
{
}
