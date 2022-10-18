// C++ Program to illustrate the use of Constructors in multilevel inheritance of your
// choice.

#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Non parameters constructors for A class" << endl;
    }
    A(int a)
    {
        cout << "parameters constructors for A class value is " << a << endl;
    }
};

class B : public A
{
public:
    B()
    {
        cout << "Non parameters constructors for B class" << endl;
    }

    B(int a, int b) : A(b)
    {
        cout << "parameters constructors for B class value is " << a << endl;
    }
};

class C : public B
{
public:
    C() : B(3, 4)
    {
        cout << "Non parameters constructors for C class" << endl;
    }
};

int main()
{
    C obj1;
    return 0;
}