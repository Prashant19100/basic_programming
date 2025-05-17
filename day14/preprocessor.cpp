/* #include <iostream>
using namespace std;

#define max(x, y) (x > y ? x : y)
#define msg(x) #x
#define pI 3.1425

#ifndef pI
#define pI 3
#endif

int main()
{
    cout << pI << endl;
    cout << max(10, 12) << endl;
    cout << msg(hello) << endl;
} */

/* #include <iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout << "First" << endl;
    }

};

namespace Second
{
    void fun()
    {
        cout << "Second" << endl;
    }

};

using namespace First;
int main()
{
    Second::fun();
    std::cout << "kkk" << endl;
}
 */

#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Destructor of Base" << endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Destructor of Derived" << endl;
    }
};

void fun()
{
    Base *p = new Derived();
    delete p;
}

int main()
{
    fun();
}
