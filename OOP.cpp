#include<iostream>
using namespace std;

// Student Class
class Student
{
public:
    string name;
    int roll;
    int marks;

    void setData(string n,int r,int m)
    {
        name=n;
        roll=r;
        marks=m;
    }

    void display()
    {
        cout<<"\n----- Student -----"<<endl;
        cout<<"Name  : "<<name<<endl;
        cout<<"Roll  : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};

// Teacher Class
class Teacher
{
public:
    string name;
    string subject;
    int salary;

    void setData(string n,string s,int sal)
    {
        name=n;
        subject=s;
        salary=sal;
    }

    void display()
    {
        cout<<"\n----- Teacher -----"<<endl;
        cout<<"Name    : "<<name<<endl;
        cout<<"Subject : "<<subject<<endl;
        cout<<"Salary  : "<<salary<<endl;
    }
};

int main()
{
    Student s1;
    Teacher t1;

    s1.setData("Adil",101,95);
    t1.setData("Rahul Sir","C++",50000);

    s1.display();
    t1.display();

    return 0;
}