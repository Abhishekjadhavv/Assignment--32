// 2. Define a class Rectangle and overload area function for different types of data type.
#include<iostream>
using namespace std;

class Rectangle
{

public:
    int area(int l, int w)
    {
        int a = l * w;
        return a;
    }

    float area(float l, float w)
    {
        float a = l * w;
        return a;
    }

    double area(double l, double w)
    {
        double a = l * w;
        return a;
    }
};

int main()
{   
    Rectangle r;
    int a;
    a = r.area(4,6);
    cout<<"Area of Rectangle is "<<a<<endl;

    float a1;
    a1 = r.area(4.5f,6.7f);
    cout<<"Area of Rectangle is "<<a1<<endl;


    double a2;
    a2 = r.area(2.2,8.7);
    cout<<"Area of Rectangle is "<<a2<<endl;


    return 0;
}