/*Encapsulation
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.

To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).

If you want others to read or modify the value of a private member, you can provide public get and set methods.
Real-Life Example
Think of an employee's salary:

The salary is private - the employee can't change it directly
Only their manager can update it or share it when appropriate
Encapsulation works the same way. The data is hidden, and only trusted methods can access or modify it.*/

// #include<iostream>
// using namespace std;

// class Employee
// {
// private:
//     int salary=5000;

// public:
//     void increaseSalary()
//     {
//         salary =salary+ 50000;
//     }

//     void display()
//     {
//         cout << "Salary = " << salary <<endl;
//     }
// };

// int main()
// {
//     Employee emp;

//     emp.display();
//     emp.increaseSalary();   // Private variable changed
//     emp.display();          // Print salary

//     return 0;
// }

//  2. Parameter private variable value change
// #include<iostream>
// using namespace std;

// class Employee
// {
// private:
//     int salary;

// public:
//     void Salary(int s)
//     {
//        salary=s;
//     }

//     void display()
//     {
//         cout << "Salary = " << salary <<endl;
//     }
// };

// int main()
// {
//     Employee emp;

//     emp.Salary(5000);   // Private variable changed
//     emp.display();          // Print salary

//     return 0;
// }

#include <iostream>
using namespace std;

class Employee
{
private:
    int salary;
    string teacher;

public:
    void setData(int s, string t)
    {
        salary = s;
        teacher = t;
    }

    int getSalary()
    {
        return salary;
    }

    string getTeacher()
    {
        return teacher;
    }
};
int main()
{
    Employee emp;
    emp.setData(500, "Amit");

    cout << "Before Data" << endl;
    cout << "Salary :" << emp.getSalary() << endl;
    cout << "Teacher :" << emp.getTeacher() << endl;
    cout << "-------------" <<endl;
    emp.setData(5000, "Ankit");
    cout << "After Update Data" << endl;
    cout << "Salary :" << emp.getSalary() << endl;
    cout << "Teacher :" << emp.getTeacher() << endl;

    return 0;
}