// Define a class Addition that can add 2 or 3 numbers of different data types using
// function overloading.

#include <iostream>
using namespace std;

class Addition
{

public:
    void add(int a, int b)
    {
        cout << "Sum is " << a + b << endl;
    }
    void add(int a, int b,int c)
    {
        cout << "Sum is " << a + b + c << endl;
    }
    void add(float a, float b)
    {
        cout << "Sum is " << a + b << endl;
    }
    void add(double a, double b)
    {
        cout << "Sum is " << a + b << endl;
    }
};

int main()
{
    Addition ad;
    ad.add(3,4);
    ad.add(3.4f,5.6f);
    ad.add(3,4,5);

    return 0;
}