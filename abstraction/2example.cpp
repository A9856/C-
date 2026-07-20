/*In C++, Abstraction is achieved by:
Access Specifiers (private, protected, public)
Abstract Classes using Pure Virtual Functions
A Pure Virtual Function is declared using:
A class containing at least one Pure Virtual Function is called an Abstract Class, and its object cannot be created.*/


#include<iostream>
using namespace std;

class Shape
{
public:

    virtual void draw()=0;
};

class Circle : public Shape
{
public:

    void draw()
    {
        cout<<"Drawing Circle";
    }
};

int main()
{
    Circle c;

    c.draw();

    return 0;
}