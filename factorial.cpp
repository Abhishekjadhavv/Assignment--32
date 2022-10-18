// Write a C++ program to find the factorial of a number using copy constructor

#include <iostream>
using namespace std;

class A
{
private:
    int a;

public:
    A()
    {
        cout << "Non parameters constructors for A class" << endl;
    }

    A(int a){
     this->a = a;
    }
    
    A(A &obj){
      int f=1;  
       while(obj.a){
         f*=obj.a--;
       }
       a = f;
    }

    void fact(){
      cout<<"Factorial is "<<a<<endl;
    }

};

int main()
{
   A obj1(5);
   A obj2 = obj1;
   obj2.fact();

    return 0;
}