/* Hierarchical Inheritance

Hierarchical Inheritance is a type of inheritance in which multiple derived classes inherit the properties and methods from a single base class.
Hierarchical Inheritance वह प्रकार है जिसमें एक Base Class की Properties और Methods को कई Derived Classes Inherit करती हैं।

One Parent Class → Many Child Classes
एक Parent Class → कई Child Classes */

#include<iostream>
using namespace std;

class Vehicle
{
public:
    void start()
    {
        cout<<"Vehicle Started"<<endl;
    }
};

class Car : public Vehicle
{
public:
    void carInfo()
    {
        cout<<"This is Car"<<endl;
    }
};

class Bike : public Vehicle
{
public:
    void bikeInfo()
    {
        cout<<"This is Bike"<<endl;
    }
};

class Bus : public Vehicle
{
public:
    void busInfo()
    {
        cout<<"This is Bus"<<endl;
    }
};

int main()
{
    Car c;
    Bike b;
    Bus bs;

    c.start();
    c.carInfo();

    b.start();
    b.bikeInfo();

    bs.start();
    bs.busInfo();

    return 0;
}