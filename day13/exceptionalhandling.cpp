/* #include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 0, z;

    try
    {

        if (y == 0)
            throw 1;
        z = x / y;
        cout << z << endl;
    }
    catch (int e)
    {
        cout << "Division by zero " << e;
    }
} */

/*#include <iostream>
using namespace std;

int division(int a, int b)
{
    if (b == 0)
        throw 1;
    return a / b;
}

int main()
{
    int x = 10, y = 2, z;
    try
    {
        if (y == 0)
            throw 1;
        z = x / y;
        z = division(x, y);
        cout << z << endl;
    }

    catch (int e)
    {
        cout << "Division by Zero" << e << endl;
    }
    cout << "Bye" << endl;
}*/

/* #include <iostream>
using namespace std;

class MyException : exception
{
};

int division(int a, int b) throw(MyException)
{
    if (b == 0)
        throw MyException();
    return a / b;
}

int main()
{
    int x = 10, y = 2, z;
    try
    {
        z = division(x, y);
        cout << z << endl;
    }
    catch (MyException e)
    {
        cout << "Division by Zero" << endl;
    }

    cout << "Bye" << endl;
}
 */

/* #include <iostream>
using namespace std;

class MyException1 : exception
{
};

class MyException2 : public MyException1
{
};

int main()
{
    try
    {
        throw MyException1();
    }

    catch (MyException2 e)
    {
        cout << "Int Catch" << endl;
    }

    catch (MyException1 e)
    {
        cout << "Double Catch" << endl;
    }

    catch (...)
    {
        cout << "All Catch" << endl;
    }
} */

#include <iostream>
using namespace std;

class StackOverFlow : public exception
{
public:
    const char *what() const throw()
    {
        return "Stack Overflow Exception";
    }
};

class StackUnderFlow : public exception
{
public:
    const char *what() const throw()
    {
        return "Stack Underflow Exception";
    }
};

class Stack
{
private:
    int *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
            throw StackOverFlow();
        stk[++top] = x;
    }

    int pop()
    {
        if (top == -1)
            throw StackUnderFlow();
        return stk[top--];
    }
};

int main()
{
    try
    {
        Stack s(5);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(10);
        s.push(9);
        s.push(8);
    }
    catch (StackOverFlow &e)
    {
        cout << e.what() << endl;
    }
    catch (StackUnderFlow &e)
    {
        cout << e.what() << endl;
    }
    catch (exception &e)
    {
        cout << "Unknown exception: " << e.what() << endl;
    }
    return 0;
}
