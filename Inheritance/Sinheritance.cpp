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

Disadvantages / Limitations of Class Hierarchy

• Increased Complexity
English: A very large or deep class hierarchy can make the program complex and difficult to understand.
Hindi: बहुत बड़ी या deep class hierarchy program को complex और समझने में difficult बना सकती है।

• Tight Coupling
English: Derived classes can become highly dependent on the implementation of the base class.
Hindi: Derived classes base class की implementation पर ज्यादा dependent हो सकती हैं।

• Difficult Debugging
English: Finding the source of an error can be difficult when many inheritance levels are involved.
Hindi: जब inheritance के बहुत सारे levels हों, तो error का source ढूँढना difficult हो सकता है।

• Multiple Inheritance Ambiguity
English: Multiple inheritance can create ambiguity when the same member is inherited through different paths.
Hindi: Multiple inheritance में same member अलग-अलग paths से inherit होने पर ambiguity हो सकती है।

• Diamond Problem
English: A diamond-shaped inheritance structure can cause duplicate base-class copies and ambiguity.
Hindi: Diamond-shaped inheritance में base class की duplicate copies और ambiguity की problem हो सकती है।

• Changes in Base Class
English: Changes made to a base class may affect multiple derived classes.
Hindi: Base class में किए गए changes multiple derived classes को affect कर सकते हैं।

• Deep Inheritance Can Be Hard to Maintain
English: A hierarchy with too many levels can become difficult to maintain and modify.
Hindi: बहुत ज्यादा levels वाली hierarchy को maintain और modify करना difficult हो सकता है।

• Unnecessary Inheritance
English: Using inheritance where it is not required can make the design unnecessarily complicated.
Hindi: जहाँ inheritance की जरूरत नहीं है वहाँ इसका use करने से design unnecessarily complicated हो सकता है।

• Reusability May Not Always Be Suitable
English: Inherited functionality may not always match the exact requirements of the derived class.
Hindi: Base class से inherited functionality हमेशा derived class की exact requirement के अनुसार suitable नहीं होती।


Main Characteristics of Class Hierarchy / Inheritance 

• Parent-Child Relationship
English: Classes are arranged in parent-child relationships using inheritance.
Hindi: Classes को inheritance के द्वारा parent-child relationship में arrange किया जाता है।

• Code Reusability
English: Common code can be reused by derived classes.
Hindi: Common code को derived classes में reuse किया जा सकता है।

• Inheritance
English: Derived classes acquire properties and functions from base classes.
Hindi: Derived classes base class की properties और functions inherit करती हैं।

• Multiple Levels
English: A hierarchy can contain multiple levels of inheritance.
Hindi: Hierarchy में inheritance के कई levels हो सकते हैं।

• Supports Polymorphism
English: Class hierarchy supports compile-time and runtime polymorphism.
Hindi: Class hierarchy polymorphism को support करती है।

• Function Overriding
English: Derived classes can override virtual functions of the base class.
Hindi: Derived classes base class के virtual functions को override कर सकती हैं।

• Common Interface
English: A base class can provide a common interface for derived classes.
Hindi: Base class derived classes के लिए common interface provide कर सकती है।

• Extensibility
English: New derived classes can be added without changing the existing base class structure.
Hindi: Existing base structure को बदलने के बिना नई derived classes add की जा सकती हैं।

Easy
Explanation

Suppose there is a class named Vehicle that contains common properties such as:

Engine
Wheels
Start()
Stop()
Instead of creating these features again for Car, Bike, and Bus, they can simply inherit them from the Vehicle class.


1. Class Hierarchy —:

A Class Hierarchy is a structure in which classes are arranged in a parent-child relationship using inheritance. A base class provides common properties and functions, while derived classes inherit and extend them.
Class Hierarchy ऐसी structure होती है जिसमें classes को inheritance के द्वारा parent-child relationship में arrange किया जाता है। Base class common properties और functions देती है और derived classes उन्हें inherit करके अपनी additional features जोड़ती हैं।

Easy Meaning

Class Hierarchy = Base Class → Derived Class → Further Derived Class

Example:

             Animal
            /      \
           Dog      Cat
          /
      doggy

 class hierarchy

2. Base Class-:

A Base Class is a class whose properties and functions are inherited by another class.
Base Class वह class होती है जिसकी properties और functions दूसरी class inherit करती है।

Example
class Animal
{
public:
    void eat()
    {
        cout << "Animal eats";
    }
};

3. Derived Class-:

A Derived Class is a class that inherits properties and functions from a base class.
Derived Class वह class होती है जो base class की properties और functions को inherit करती है।

Example
class Dog : public Animal
{
};

यहाँ Dog Derived Class है।

4. Parent Class

A parent class is another name for a base class that provides common features to its child classes.
Parent Class, Base Class का दूसरा नाम है। यह अपनी child classes को common features provide करती है।

Parent
  ↓
Animal

5. Child Class

A child class is another name for a derived class that inherits features from a parent class.
Child Class, Derived Class का दूसरा नाम है। यह parent class से features inherit करती है।

Animal
  ↓
Dog

यहाँ Dog child class है।

6. Inheritance

Inheritance is an OOP mechanism in which a derived class acquires properties and functions of an existing base class.

Inheritance OOP का mechanism है जिसमें derived class existing base class की properties और functions को acquire करती है।

Syntax
class Derived : public Base
{
}; */

/*5 Types of Inheritance /Class Hierarchy
Single Inheritance
Multilevel Inheritance
Multiple Inheritance
Hierarchical Inheritance
Hybrid Inheritance

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