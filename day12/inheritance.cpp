/* #include <iostream>
using namespace std;
class Base
{

public:
    void display()
    {
        cout << "Display of Base" << endl;
    }
};
class Derived : public Base
{
};
int main()
{
    Derived d;
    d.display();
}*/

/* #include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() : length(0), breadth(0){}; // default constructor with member initialisation

    Rectangle(int l, int b); // parameterized constructor
    // Rectangle(Rectangle &r);             // Copy Constructor
    int getLength() { return length; }   // Accessor for reading the properties
    int getBreadth() { return breadth; } // Accessor
    void setLength(int l);               // Mutators for modify the properties
    void setBreadth(int b);              // Mutators
    int area();                          // facilators
    int perimeter();                     // facilators
    // bool isSquare();                     // enquiry or inspector
    // ~Rectangle();                        // Destructor
};

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)
    {
        height = h;
    }
    int getHeight() { return height; }                           // Accessor
    void setHeight(int h) { height = h; }                        // Mutator
    int volume() { return getLength() * getBreadth() * height; } // Facilator
};

int main()
{
    Cuboid c(5);
    c.setHeight(10);
    c.setBreadth(7);
    cout << c.volume() << endl;
} */

/* #include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() : length(0), breadth(0) {}             // Default constructor
    Rectangle(int l, int b) : length(l), breadth(b) {} // Parameterized constructor
    int getLength() { return length; }                 // Accessor for reading the properties
    int getBreadth() { return breadth; }               // Accessor
    void setLength(int l) { length = l; }              // Mutators for modifying the properties
    void setBreadth(int b) { breadth = b; }            // Mutators
    int area() { return length * breadth; }            // Facilitators
    int perimeter() { return 2 * (length + breadth); } // Facilitators
    bool isSquare() { return length == breadth; }      // Inquiry or inspector
    ~Rectangle() {}                                    // Destructor
};

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h) : height(h) {}
    int getHeight() { return height; }                           // Accessor
    void setHeight(int h) { height = h; }                        // Mutator
    int volume() { return getLength() * getBreadth() * height; } // Facilitator
};

int main()
{
    Cuboid c(5);
    c.setLength(4);
    c.setHeight(10);
    c.setBreadth(7);
    cout << c.volume() << endl; // Output: 350
    return 0;
}*/

// Demo Construction in inheritance

#include <iostream>
using namespace std;
class Base
{
public:
    Base() { cout << "non parameter base" << endl; }
    Base(int x) { cout << "parameterized base " << x << endl; }
};
class Derived : public Base
{
public:
    Derived() { cout << "Non - param of Derived constructor called\n"; }
    Derived(int a) { cout << "parameterized derived " << a << endl; }

    Derived(int x, int y) : Base(x) { cout << "param of the derived " << x << y << endl; }
};
int main()
{
    // Derived d(50);
    Derived dd(20, 30);
}