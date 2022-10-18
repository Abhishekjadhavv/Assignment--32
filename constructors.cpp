// Define a class A having multiple constructors. Define another class B derived from
// class A. Create derived class constructors and show use of constructor in this single
// inheritance.

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
        cout << "parameters constructors for A class" << endl;
    }
};

class B: public A
{
public:
    B() : A(5)
    {
        cout << "Non parameters constructors for B class" << endl;
    }
};

int main()
{
    B b;
    return 0;
}