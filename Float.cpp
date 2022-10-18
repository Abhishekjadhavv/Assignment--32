// Create a class FLOAT that contains one float data member. Overload all the four
// arithmetic operators so that they can operate on the objects of FLOAT.

#include<iostream>
#include<stdlib.h>
using namespace std;

class Float
{
private:
    float f;

public:
    Float()
    {
        f = 0.0;
    }

    Float(float f)
    {
        this->f = f;
    }

    Float operator+(Float f2)
    {
        Float f1;
        f1.f = f + f2.f;
        return f1;
    }

    Float operator-(Float f2)
    {
        Float f1;
        f1.f = f - f2.f;
        return f1;
    }

    Float operator/(Float f2)
    {
        Float f1;
        if(f2.f == 0)
        {
            cout<<"Divide by zero error"<<endl;
            exit(0);
        }
        f1.f = f / f2.f;
        return f1;
    }

    Float operator*(Float f2)
    {
        Float f1;
        f1.f = f * f2.f;
        return f1;
    }
    void showData(){
        cout<<f<<endl;
    }
};

int main()
{
    Float f1(8.5), f2(6), f3;
    f3 = f1 + f2;
    f3.showData();
    f3 = f1 - f2;
    f3.showData();
    f3 = f1 / f2;
    f3.showData();
    f3 = f1 * f2;
    f3.showData();
    return 0;
}