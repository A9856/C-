#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sd()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Dog d;

    d.sound();
    d.sd();

    return 0;
}