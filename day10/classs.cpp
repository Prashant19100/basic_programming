/* #include <iostream>
using namespace std;
// how to create class in c++

class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int  main()
{
    Rectangle r1;
    r1.length = 5;
    r1.breadth = 6;
    cout << "Area of the rectangle is : " << r1.area();
    cout  << "\nPerimeter of the rectangle is : " << r1.perimeter();

    // creating object of a class and accessing its method using dot operator
} */

/* #include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int breadth;
    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    Rectangle *ptr;
    ptr = &r1; // address of r1 is stored in pointer variable ptr
    ptr->length = 10;
    ptr->breadth = 5;
    cout << ptr->area() << endl;
    cout << ptr->perimeter() << endl;
} */

/*// Demo - Accessors and Mutators

#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l)
    {
        if (length < 0)
        {
            length = 1;
        }
        else
            length = l;
    }

    void setBreadth(int b) // Mutator of the class
    {
        if (b <= 0)
        {
            breadth = 1;
        }
        else
            breadth = b;
    }

    int getLength() // Assecor of the class
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1;
    r1.setLength(-10);
    r1.setBreadth(5);
    cout << r1.area();
    return 0;
}*/

// Deep copy constructor

/* #include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() // default constructor
    {
        length = 1;
        breadth = 1;
    }

    Rectangle(int l, int b) // parameterized constructor
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l)
    {
        if (length < 0)
        {
            length = 1;
        }
        else
            length = l;
    }

    void setBreadth(int b) // Mutator of the class
    {
        if (b <= 0)
        {
            breadth = 1;
        }
        else
            breadth = b;
    }

    int getLength() // Assecor of the class
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r1(10, 5);
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
} */

// All types of the constructors

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(),                         // Default constuctor
        Rectangle(int l, int b);         // parameterized constructor
    Rectangle(Rectangle &r);             // Copy Constructor
    int getLength() { return length; }   // Accessor for reading the properties
    int getBreadth() { return breadth; } // Accessor
    void setLength(int l);               // Mutators for modify the properties
    void setBreadth(int b);              // Mutators
    int area();                          // facilators
    int perimeter();                     // facilators
    bool isSquare();                     // enquiry or inspector
    ~Rectangle();                        // Destructor
};
int main()
{
    Rectangle r1(10, 10);
    cout << "Area is = " << r1.area() << endl;
    if (r1.isSquare())
    {
        cout << "It's a square." << endl;
    }
}

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l)
{
    length = l;
}

void Rectangle::setBreadth(int b)
{
    breadth = b;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

bool Rectangle::isSquare()
{
    return length == breadth;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle Destroyed" << endl;
}
