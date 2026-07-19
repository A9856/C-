/*Multiple Inheritance

Multiple Inheritance is a type of inheritance in which one derived class inherits the properties and methods from two or more base classes.
Multiple Inheritance वह प्रकार है जिसमें एक Derived Class, दो या दो से अधिक Base Classes की Properties और Methods को Inherit करती है।

Many Parent Classes → One Child Class
दो Parent Classes → एक Child Class */

#include<iostream>
using namespace std;

class Camera
{
public:
    void clickPhoto()
    {
        cout<<"Taking Photo"<<endl;
    }
};

class Music
{
public:
    void playMusic()
    {
        cout<<"Playing Music"<<endl;
    }
};

class Smartphone : public Camera, public Music
{
public:
    void call()
    {
        cout<<"Making Call"<<endl;
    }
};

int main()
{
    Smartphone s;

    s.clickPhoto();
    s.playMusic();
    s.call();

    return 0;
}