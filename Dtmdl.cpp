#include<iostream> //input cin output cout facility
using namespace std; // standard library 
// Student Module //struct means structure user define data type.
// different type data ko ek name ke andr rkhne ke lie 
struct Student
{
    string name;
    int roll;
    int marks;
};
void displayStudent(Student s) //displayStudent()student information display Student object rcv krega
{
    cout<<"\n----- Student Module -----"<<endl;
    cout<<"Name  : "<<s.name<<endl;
    cout<<"Roll  : "<<s.roll<<endl;
    cout<<"Marks : "<<s.marks<<endl;
}
// Teacher Module
struct Teacher
{
    string name;
    string subject;
    int salary;
};
void displayTeacher(Teacher t)
{
    cout<<"\n----- Teacher Module -----"<<endl;
    cout<<"Name    : "<<t.name<<endl;
    cout<<"Subject : "<<t.subject<<endl;
    cout<<"Salary  : "<<t.salary<<endl;
}
int main()
{
    Student s;
    Teacher t1;

    s.name="Adil";
    s.roll=101;
    s.marks=95;

    t1.name="Rahul Sir";
    t1.subject="C++";
    t1.salary=50000;

    displayStudent(s);
    displayTeacher(t1);

    return 0;
}