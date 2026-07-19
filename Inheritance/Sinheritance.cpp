/*Inheritance in C++ 

Inheritance is one of the most important features of Object-Oriented Programming (OOP). It is the process by which one class (called the Derived Class or Child Class) acquires the properties (data members/attributes) and behaviors (member functions/methods) of another class (called the Base Class or Parent Class).
Inheritance allows a new class to reuse the existing code of another class instead of writing the same code again. The derived class can use, extend, or modify the features of the base class according to its requirements. This improves code reusability, maintainability, scalability, and reduces code duplication, making programs easier to develop and manage.

Inheritance, Object-Oriented Programming (OOP)की सबसे महत्वपूर्ण विशेषताओं(Features)में से एक है। यह वह प्रक्रिया(Process)
है जिसमें एक Class(Derived Class या Child Class), दूसरी Class(Base Class या Parent Class) की Properties(Data Members / Attributes) और Behaviors(Methods / Member Functions) को प्राप्त(Inherit)
करती है।
Inheritance की सहायता से नई Class को वही Code दोबारा लिखने की आवश्यकता नहीं होती,
क्योंकि वह पहले से बनी हुई Class के Code का पुनः उपयोग(Code Reusability) कर सकती है। Derived Class, Base Class की सुविधाओं का उपयोग(Use), विस्तार(Extend) और आवश्यकतानुसार परिवर्तन(Modify)भी कर सकती है। इससे Program अधिक संगठित(Organized), रखरखाव में आसान(Easy to Maintain), विस्तार योग्य(Scalable)और Code Duplication से मुक्त हो जाता है।

The Base Class is also called the Parent Class or Super Class.
The Derived Class is also called the Child Class or Sub Class.
In C++, inheritance is represented using the colon (:) operator.

Advantages of Inheritance
1. Code Reusability -> Existing code can be reused.
2. Less Code Duplication -> Same code is not written repeatedly.
3. Easy Maintenance -> Easy to update and manage programs.
4. Extensibility -> New features can be added easily.
5. Supports Hierarchical Relationships->  Represents real-world relationships.
6. Improves Program Structure -> Makes code organized and readable.


Easy
Explanation

Suppose there is a class named Vehicle that contains common properties such as:

Engine
Wheels
Start()
Stop()
Instead of creating these features again for Car, Bike, and Bus, they can simply inherit them from the Vehicle class.*/

/*5 Types of Inheritance 
Single Inheritance-->
Single Inheritance is a type of inheritance in which one derived class inherits the properties and methods of only one base class.
Single Inheritance वह प्रकार (Type) है जिसमें एक Derived Class केवल एक Base Class की Properties (Data Members) और Methods (Member Functions) को Inherit (प्राप्त) करती है।

One Parent Class → One Child Class
एक Parent Class → एक Child Class*/

#include <iostream>
using namespace std;

class Animal
{
public:
    void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
    }
};

int main()
{
    Dog d;

    d.sound();
    d.bark();

    return 0;
}