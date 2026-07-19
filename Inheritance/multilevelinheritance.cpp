/*Multilevel Inheritance

Multilevel Inheritance is a type of inheritance in which a derived class becomes the base class for another derived class, forming a chain of inheritance.
Multilevel Inheritance वह प्रकार है जिसमें एक Derived Class आगे दूसरी Derived Class की Base Class बन जाती है। इस प्रकार Inheritance एक Chain (श्रृंखला) के रूप में कार्य करती है।

Grandparent → Parent → Child
दादा (Grandparent) → पिता (Parent) → बच्चा (Child)
 */

#include<iostream>
using namespace std;

class Person
{
public:
    void personInfo()
    {
        cout<<"I am a Person"<<endl;
    }
};

class Teacher : public Person
{
public:
    void teach()
    {
        cout<<"I teach students"<<endl;
    }
};

class Principal : public Teacher
{
public:
    void manage()
    {
        cout<<"I manage the school"<<endl;
    }
};

int main()
{
    Principal p;

    p.personInfo();
    p.teach();
    p.manage();

    return 0;
}