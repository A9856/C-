#include<iostream>
using namespace std;

// Abstract Base Class
class Shape
{
public:
    // Pure Virtual Function
    virtual void draw() = 0;

    // Virtual Destructor
     virtual ~Shape()
    {
        cout << "Shape Destructor" << endl; 
        //To ensure that delete ptr calls the Derived Class Destructor first and then the Base Class Destructor, you must declare the Base Class destructor as virtual.
    }
};

// Derived Class 1
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }

    ~Circle()
    {
        cout << "Circle Destructor" << endl;
    }
};

// Derived Class 2
class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Square" << endl;
    }

    ~Square()
    {
        cout << "Square Destructor" << endl;
    }
};

int main()
{
    Shape *ptr = new Circle();
    ptr->draw();
    delete ptr;

    cout << endl;

   ptr = new Square();
    ptr->draw();
    delete ptr;

    return 0;
}

/*
Destructor in C++ 

A Destructor is a special member function of a class that is automatically called when an object is destroyed. Its main purpose is to release resources such as memory, files, or network connections used by the object.

Destructor C++ का एक Special Member Function होता है, जो Object के समाप्त (Destroy) होने पर अपने आप (Automatically) Call होता है। इसका मुख्य कार्य Object द्वारा उपयोग किए गए Memory और अन्य Resources को मुक्त (Free) करना होता है।

short way ->
A Destructor is a function that cleans up an object before it is destroyed.
Destructor वह Function है जो Object के समाप्त होने से पहले उसकी Memory और Resources को साफ (Free) करता है।*/