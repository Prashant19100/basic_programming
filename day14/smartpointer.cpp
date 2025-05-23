/* #include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{
    shared_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area() << endl;
    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr;

    cout << "ptr2 " << ptr2->area() << endl;
    cout << "ptr " << ptr->area() << endl;
    cout << ptr.use_count() << endl;
}
 */

#include <iostream>
#include <memory>
using namespace std;

class Test
{
    int x = 10;
    int y = 13;

public:
    Test(int a, int b)
    {
        x = a;
        y = b;
    }
    Test() : Test(1, 1)
    {
    }
};

int main()
{
}
